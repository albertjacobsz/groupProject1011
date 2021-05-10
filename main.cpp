
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
void pathDecider(int);
void printData(Node*);
void searchSub();//search title
void searchCode();
void searchPre();
//END PROTOTYPE DECLARATIONS

int main(){
    int choice;
    do{
    startPrint();
    //get user input to continue to the query
    /*
    int cont;
    cont = dataValidation(cont);
    */
    //int found = 0;
    cin >> choice;
    pathDecider(choice);
    }while(choice != 4);
    cout<<"Thank you for using the COMP Database" << endl;
 return 0;
}
void pathDecider(int choice){
        switch(choice){
        case 1: 
            searchSub();
            break;
        case 2:
            searchCode();//search subject code
            break;
        case 3:
            searchPre();//search Pre Requisite
        default:
            break;
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
    cout << "3- To search what a subject is a pre-requisite to" << endl;
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
void printData(Node *list){
    list = list->reverse(list);
    list = list->next;
    cout <<"|"<< setw(12) << "CODE| " << "TITLE" << endl;
    cout << "------------------------------------------------------------" << endl;
    while(list->next != NULL){
        cout << "|" <<setw(10)  << list->getData().subCode <<"|"  << list->getData().subTitle << endl;
        cout << "Pre-Requisites:";
        for(int re = 0; re<5; re++){//print all pre-req
            cout <<"  "<< list->getData().preReq[re];
        }
        cout << endl << "Credits: " << list->getData().credit << endl;
        cout << "Weight: " << list->getData().weight << endl;
        cout <<"Lecture/On-site(hours):" << list->getData().lecture << endl;
        cout << "Student Effort(hours): " << list->getData().tls << endl;
        cout  << "Cumulative Assessement(%):" << list->getData().ca << endl;
        cout << "Final Exam(%): " <<  list->getData().exam <<" | \n" << endl;
        list = list->next;
    }
    //cout << "|" <<list->getData().subCode <<" | "<< list->getData().subTitle << " | "<< list->getData().preReq[0]<<" | " << list->getData().ca <<" | " <<  list->getData().exam <<" |\n\n" << endl;
     cout << "|" <<setw(10)  << list->getData().subCode <<"|"  << list->getData().subTitle << endl;
        cout << "Pre-Requisites:" << list->getData().preReq[0];
        for(int re = 1; re<5; re++){//print all pre-req
            cout <<"  "<< list->getData().preReq[re];
        }
        cout << endl << "Weight: " << list->getData().weight << endl;
        cout <<"Lecture/On-site(hours):" << list->getData().lecture << endl;
        cout << "Student Effort(hours): " << list->getData().tls << endl;
        cout  << "Cumulative Assessement(%):" << list->getData().ca << endl;
        cout << "Final Exam(%): " <<  list->getData().exam <<" | \n" << endl;
}

void searchSub(){
    int found = 0;
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

    for(int i = 0; i<81; i++){
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
}

void searchCode(){
     int found = 0;
    //END TODO
    //get query input
    string query = userInput();
    cout << "\nSearching for: " << query << endl;
    //initialize all the data for the query
    Search search;
    Subject info[85];
    Subject *p = info;
    cout << p[60].subTitle;
    p = init_data();

    //Create new Link list
    Node *list = new Node();
    //check if the the Link list exists
    bool outer = false;
    for(int i = 0; i<81; i++){

        //get subject at specific i index
        Subject subject = p[i];
        //turn the title into a string
        string data = charArr2String(p[i].subCode);
        //see whether pattern occurs in the string
        bool yn = search.searchPattern(query,data);
        //if its true
        if(yn){
            //cout << p[i].exam << endl;
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

void searchPre(){
     int found = 0;
    //END TODO
    //get query input
    string query = userInput();
    cout << "\nSearching for: " << query << endl;
    //initialize all the data for the query
    Search search;
    Subject info[85];
    Subject *p = info;
    cout << p[60].subTitle;
    p = init_data();

    //Create new Link list
    Node *list = new Node();
    //check if the the Link list exists
    bool outer = false;
    for(int i = 0; i<81; i++){

        //get subject at specific i index
        Subject subject = p[i];
        //turn the title into a string
        for(int j = 0; j < 5; j++){
        string data = charArr2String(p[i].preReq[j]);
        
        //see whether pattern occurs in the string
        bool yn = search.searchPattern(query,data);
        //if its true
            if(yn){
                //cout << p[i].exam << endl;
                //add the specific subject to the link list
            list = list->push(list, subject);
            //ensure that we know the link list has objects inside of it
            outer = true;
            found += 1;
            }
        }
    }
    cout << "\n\nThere were " << found << " occurences found for the search term: " << query << "\n\n" << endl;
    //if we know the link list has objects inside of it
    if(outer == true){
        printData(list);
    }
    
}