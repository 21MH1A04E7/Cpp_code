#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node {//creating class
   public:
   int data;
   Node* next;
   Node(int data){
    this->data=data;
    this->next=NULL;
   }
};
void insertatanode(Node* &head,int data){
    //new node create
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
void print(Node* &head){
    //created a new node 
  Node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}
int main(){
    Node* node1=new Node(10);//dynamic allocating memory in heap
    cout<<(*node1).data<<endl;
    cout<<node1->next<<endl;
    Node* head=node1;
    
}
