
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
//END PROTOTYPE DECLARATIONS

int main(){
    startPrint();
    //get user input to continue to the query
    int cont;
    while(cin>>cont || cont != 1){
        if(cont == 1){
            break;
        }
        cout<< "please enter in one" << endl;
    }
    //get query input
    string query = userInput();
    cout << "Searching for " << query << endl;
    //initialize all the data for the query
    Search search;
    Subject info[81];
    Subject *p = info;
    p = init_data();
    //Create new Link list
    Node *list = new Node();
    //check if the the Link list exists
    bool outer = false;
    for(int i = 45; i<56; i++){
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
        }
        
    }
    //if we knoow the link list has objects inside of it
    if(outer == true){
        //reverse the link list, since the link list's current pointer is at the end of the link list
        list = list->reverse(list);
        //print out all the titles
        while(list->next != NULL){
            cout << list->getData().subTitle <<endl;
            //and move on the next node
            list = list->next;
        }
        //since while loop exits at the last node (without printing it) we print the data of the last node
        cout << list->getData().subTitle <<endl;
    }
    

    //test
    /*
    for (int i = 45; i<56;i++){
        cout << setw(15) << "Level: " << p[i].level << endl;
        cout << setw(15) << "Code: " << p[i].subCode << endl;
        cout << setw(15) << "Title: " << p[i].subTitle << endl;
        cout << setw(15) << "Credit: " << p[i].credit << endl;
        for(int j=0; j<5;j++){
            cout << setw(15) << "Pre-Req: " << p[i].preReq[j] << endl;
        }
        cout << setw(15) << "lecture: " << p[i].lecture << endl;
        cout << endl;
    }
    */
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

}
void startPrint(){
    cout << "Welcome to the COMP database" << endl;
    cout << "In this program, you can find the information about all the subjects offered by the COMP department" << endl;
    cout << "To search for a subject enter 1" << endl;
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

