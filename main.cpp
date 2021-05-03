
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
//END PROTOTYPE DECLARATIONS

int main(){
    startPrint();
    int cont;
    while(cin>>cont || cont != 1){
        if(cont == 1){
            break;
        }
        cout<< "please enter in one" << endl;
    }
    
    Subject info[81];
    Subject *p = info;
    p = init_data();
    //test
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
void startPrint(){
    cout << "Welcome to the COMP database" << endl;
    cout << "In this program, you can find the information about all the subjects offered by the COMP department" << endl;
    cout << "To search for a subject enter 1" << endl;
}
Node init_subject(){
    Node *list = new Node();

    //Add subjects to the list using the Doubly Link list functions
}
string userInput(){
    // todo add data verification
    string user;
    cout<< "Please enter in a key word or phrase" << endl;
    getline(cin,user);
    return user;
}

