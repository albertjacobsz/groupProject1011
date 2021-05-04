
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
Node init_subject();
string userInput();
void startPrint();
string toLowerCase(string);
int dataValidation(int);
string dataValidation(string);
void printData(Node*);
//END PROTOTYPE DECLARATIONS

int main(){
    startPrint();
    //get user input to continue to the query
    int cont;
    cont = dataValidation(cont);
    //END TODO
    //get query input
    string query = userInput();
    cout << "\nSearching for " << query << endl;
    //initialize all the data for the query
    Search search;
    Subject info[81];
    Subject *p = info;
    p = init_data();
    //Create new Link list
    Node *list = new Node();
    //check if the the Link list exists
    bool outer = false;
    //int that counts how many instances were found
    int found = 0;
    for(int i = 45; i<56; i++){
        //get subject at specific i index
        Subject subject = p[i];
        //turn the title into a string
        string data = charArr2String(p[i].subTitle);
        //TODO FIX THIS BUG
        //data = toLowerCase(data);
        //query = toLowerCase(query);
        //cout << data << endl;
        //cout << query << endl;
        //END TODO
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
 return 0;
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
string toLowerCase(string text){
    int size = text.size();
    string newString = "";
    for(int i = 0; i<size; i++){
        char temp = newString[i];
        if(int(temp) >= 65 && int(temp) <= 90){
            int off = int(temp) - 65;
            off = off + 97;
            char temp = off;
        }
        newString += temp;
    }
    return newString;
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
    while(cont != 1){
        cout<< "please enter in one" << endl;
        cin >> cont;
    }
    return cont;
}
void printData(Node *list){
    list = list->reverse(list);
    list = list->next;
    cout << "| CODE | TITLE \t\t |Pre-Requisites\t | CA | Exam | " << endl;
    cout << "------------------------------------------------------------" << endl;
    while(list->next != NULL){
        cout << "|" <<list->getData().subCode <<" | "<< list->getData().subTitle << " | "<< list->getData().preReq[0]<<"| " << list->getData().ca <<" | " <<  list->getData().exam <<" | \n" << endl;
        list = list->next;
    }
    cout << "|" <<list->getData().subCode <<" | "<< list->getData().subTitle << " | "<< list->getData().preReq[0]<<" | " << list->getData().ca <<" | " <<  list->getData().exam <<" |\n\n" << endl;
}