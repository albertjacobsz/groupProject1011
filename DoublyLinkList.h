//todo add this file
//#include "structures.h"
#include <iostream>
class Node{
    private:
        //Subject subject;
        int placeholder;
    public:
        Node *prev;
        Node *next;
        Node();
        Node* push(Node*);
        //todo change this to struct
        void setData(int);
        int getData();
        Node* reverse(Node*);
};
//todo change this
void Node::setData(int place){
    placeholder = place;
}
//todo change this
int Node::getData(){
    return placeholder;
}
Node::Node(){
    //todo remove placeholder
    placeholder = 0;
    prev = NULL;
    next = NULL;
}
Node* push(Node* list){
    Node *newNode = new Node();
    newNode->setData(0);
    newNode->next = NULL;
    newNode->prev = list;
    list->next=newNode;
    return list;
}
Node* reverse(Node* list){
    //if the node next is null, it means the node is at the end of the list
    if(list->next== NULL){
        while(!list->prev){
            list = list->prev;
        }
    }else{
        while(!list->next){
            list= list->next;
        }
    }
    return list;
}