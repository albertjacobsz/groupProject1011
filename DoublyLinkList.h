//todo add this file
#include "Subject.h"

class Node{
    private:
        Subject subject;
        
    public:
        Node *prev;
        Node *next;
        Node();
        Node* push(Node*, Subject);
        //todo change this to struct
        void setData(Subject);
        Subject getData();
        Node* reverse(Node*);
};
//todo change this
void Node::setData(Subject place){
    subject = place;
}
//todo change this
Subject Node::getData(){
    return subject;
}
Node::Node(){
    //todo remove placeholder
    prev = NULL;
    next = NULL;
}
Node* Node::push(Node* list, Subject data){
    Node *newNode = new Node();
    newNode->setData(data);
    newNode->next = NULL;
    newNode->prev = list;
    list->next=newNode;
    return list;
}
Node* Node::reverse(Node* list){
    //if the node next is null, it means the node is at the end of the list
    if(list->next== NULL){
        while(!list->prev){
            list = list->prev;
        }
    }else{
        while(!list->next){
            list = list->next;
        }
    }
    return list;
}