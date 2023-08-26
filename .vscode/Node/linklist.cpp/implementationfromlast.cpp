#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  Node(int data){
    this->data=data;
    this->next=NULL;
  }
};
void inserted(Node* &head,int d){//for tail
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void insert(Node* &tail,int d){
    //new node created
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;

}
void print(Node* &tail){
    Node* temp=tail;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}
int main(){
   Node* node1=new Node(6);
   //Node* head=new Node(6);
   Node* tail=node1;
   print(tail);
   insert(tail,56);
   print(tail);
   insert(tail,45);
   print(tail);
}