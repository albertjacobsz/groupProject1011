//todo add this file
#include "Subject.h"
using namespace std;
class Node{
    private:
        Subject subject;
        
    public:
        Node *prev;
        Node *next;
        Node();
        Node* push(Node*, Subject);
        void setData(Subject);
        Subject getData();
        Node* reverse(Node*);
};
void Node::setData(Subject place){
    subject = place;
}
Subject Node::getData(){
    return subject;
}
Node::Node(){
    prev = NULL;
    next = NULL;
}
Node* Node::push(Node* list, Subject data){
    Node *newNode = new Node();
    newNode->setData(data);
    newNode->next = NULL;
    newNode->prev = list;
    list->next=newNode;
    return newNode;
}
Node* Node::reverse(Node* list){
    //if the node next is null, it means the node is at the end of the list
    if(list->next == NULL){
        while(list->prev != NULL){
            list = list->prev;
        }
    }else{
        while(list->next != NULL){
            list = list->next;
        }
    }
    return list;
}