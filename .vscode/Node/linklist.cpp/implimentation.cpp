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
 void insertnode(Node* &head,int data){
    //created a new node;
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
 }
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
 }
int main(){
    //created a new node:
    Node* node1=new Node(10);
    cout<<node1->data<<endl;
   // cout<<node1->next<<endl;
    //head pointed to node1
   Node* head=node1;//
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
     insertnode(head,x);
   }
   print(head);
   //print(head);
   //insertnode(head,12);
   //print(head);
   //insertnode(head,45);
   //print(head);
   //insertnode(head,67);
   //print(head);
}