#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int data;
Node* next;

Node(){
    data = 0;
    next = NULL;
}
};

Node* head;
void InsertNode(int data){
Node* newNode = new Node;
newNode->data = data;

newNode->next = head;
head = newNode;
}

void printNode(){
    Node* temp = head;
    while(temp!=NULL){
    cout<<"Data :"  <<  temp -> data << " self-address :" << temp << " nextaddress :" << temp->next << endl;
    temp = temp->next;
}
}

void lastposition(int data){
    Node*last = head;
    while(last!=NULL){
        last = last->next;
    }
    Node* lastNode = new Node;
    lastNode->data = data;

    lastNode->next = last;
    last = lastNode;

    cout<<"This is the new last Node :"<<endl;
    cout<<"Data1 :"  <<  lastNode -> data << " self-address1 :" << lastNode << " nextaddress :" << lastNode->next << endl;
}
int main(){

Node* newNode1 = new Node;
newNode1 -> data = 10;

Node* newNode2 = new Node;
newNode2 -> data = 20;

Node* newNode3 = new Node;
newNode3 -> data = 30;

Node* newNode4 = new Node;
newNode4-> data = 40;

newNode1->next = newNode2;
newNode2->next = newNode3;
newNode3->next = newNode4;

head = newNode1;

InsertNode(80);
printNode();

lastposition(110);
}