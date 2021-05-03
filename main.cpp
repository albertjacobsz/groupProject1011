#include "Subject.h"
#include "DoublyLinkList.h"
#include "Search.h"

//START PROTOTYPE DECLARATIONS
string charArr2String(char*);
Node init_subject();
string userInput();
void startPrint();
//END PROTOTYPE DECLARATIONS
int main(){
    startPrint();
    int cont;
    while(cin>>cont){
        if(!(cin>>cont)){
            cout<<"please only enter in an int" << endl;
            cin.clear();
            cin.ignore(10000,'\n');
        }
        if(cont != 1){
            cout<< "please only enter in 1" << endl;
        }
        if(cont == 1){
            break;
        }
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