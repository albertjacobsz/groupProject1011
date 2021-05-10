
#include<cstring>
#include <string.h>
#include "Subject.h"
#include "DoublyLinkList.h"
#include "Search.h"
#define _CRT_SECURE_NO_WARNINGS
#include<cstring>
#include <iomanip>
#include <iostream>
using namespace std;
//START PROTOTYPE DECLARATIONS
string charArr2String(char*);
string userInput();
void startPrint();
int dataValidation(int);
void printData(Node*);
void printByPhrase(string);
void printByCode(string);
//END PROTOTYPE DECLARATIONS

int main(){
    startPrint();
    //get user input to continue to the query
    int cont;
    cont = dataValidation(cont);
    if(cont == 1){
        string query = userInput();
        cout << "\nSearching for " << query << endl;
        printByPhrase(query);
    }else if(cont == 2){
        string userCode = "";
        while(userCode.length() != 7){
            cout<< "Enter in an a subject code (including COMP)" << endl;
            getline(cin,userCode);
            cin.ignore();
        }
        printByCode(userCode);
    }
    else{
        return 0;
    }
    //get query input

 return 0;
}
void printByCode(string query){
        //initialize all the data for the query
    int found = 0;
    Search search;
    Subject info[81];
    Subject *p = info;
    p = init_data();
    //Create new Link list
    Node *list = new Node();
    //check if the the Link list exists
    bool outer = false;
    for(int i = 45; i<81; i++){
        //get subject at specific i index
        Subject subject = p[i];
        //turn the title into a string
        string data = charArr2String(p[i].subCode);
        //see whether pattern occurs in the string
        bool yn = search.searchPattern(query,data);
        //if its true
        if(yn){
            //add the specific subject to the link list
           list = list->push(list, subject);
           //ensure that we know the link list has objects inside of it
           outer = true;
           found += 1;
        }
    }
    cout << "\n\nThere were " << found << " occurences found for the search term: " << query << "\n\n" << endl;
    //if we know the link list has objects inside of it
    if(outer == true){
        printData(list);
    }
}
void printByPhrase(string query){
    //initialize all the data for the query
    int found = 0;
    Search search;
    Subject info[81];
    Subject *p = info;
    p = init_data();
    //Create new Link list
    Node *list = new Node();
    //check if the the Link list exists
    bool outer = false;
    for(int i = 45; i<81; i++){
        //get subject at specific i index
        Subject subject = p[i];
        //turn the title into a string
        string data = charArr2String(p[i].subTitle);
        //see whether pattern occurs in the string
        bool yn = search.searchPattern(query,data);
        //if its true
        if(yn){
            //add the specific subject to the link list
           list = list->push(list, subject);
           //ensure that we know the link list has objects inside of it
           outer = true;
           found += 1;
        }
    }
    cout << "\n\nThere were " << found << " occurences found for the search term: " << query << "\n\n" << endl;
    //if we know the link list has objects inside of it
    if(outer == true){
        printData(list);
    }
}
string charArr2String(char* array){
    int i = 0;
    string sentence = "";
    while(array[i] != '\0'){
        sentence += array[i];
        i++;
    }
    return sentence;
}
void startPrint(){
    cout << "//----Welcome to the COMP database----\\\\" << endl;
    cout << "This is the menu enter:" << endl;
    cout << "1- To search a subject title using a key word" << endl;
    cout << "2- To search a subject code by using a subject code" <<endl;
    cout << "4- To quit" << endl;
}
string userInput(){
    // todo add data verification
    char user[160];
    cout<< "Please enter in a key word or phrase" << endl;
    cin >> user;
    string userIn;
    userIn = charArr2String(user);
    return userIn;
}

int dataValidation(int cont){
    cin >> cont;
    //TODO PREVENT USERS FROM CREATING AN INFINITE LOOP
    while(cont != 1 && cont != 2 && cont != 4){
        cout<< "please enter in 1 or 2 or 4" << endl;
        cin >> cont;
    }
    return cont;
}
void printData(Node *list){
    list = list->reverse(list);
    list = list->next;
    cout << setw(10) << "| CODE " <<setw(40) << "| TITLE \t\t |Pre-Requisites\t | CA | Exam | " << endl;
    cout << "------------------------------------------------------------" << endl;
    while(list->next != NULL){
        cout << "|" <<list->getData().subCode <<" | "<< list->getData().subTitle << " | "<< list->getData().preReq[0]<<"| " << list->getData().ca <<" | " <<  list->getData().exam <<" | \n" << endl;
        list = list->next;
    }
    cout << "|" <<list->getData().subCode <<" | "<< list->getData().subTitle << " | "<< list->getData().preReq[0]<<" | " << list->getData().ca <<" | " <<  list->getData().exam <<" |\n\n" << endl;
}