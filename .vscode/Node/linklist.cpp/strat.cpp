#include<iostream>
using namespace std;
class Node{
  public:
  int data;//doubly linkedlist 
  Node* pre;
  Node* next;
  Node(int data){
    this->data=data;
    this->pre=NULL;
    this->next=NULL;
  }
};
void insertathead(Node* &tail,Node* &head,int data){
    if(head==NULL){
        Node* temp=new Node(data);
        head=temp;
        tail=temp;
    }
    else{
    Node* temp=new Node(data);
    temp->next=head;
    head->pre=temp;
    head=temp;
    }
}
void insertattail(Node* &tail,Node* &head,int data){
    if(tail==NULL){
        Node* temp=new Node(data);
        tail=temp;
        head=temp;
    }else{
    Node* temp=new Node(data);
    tail->next=temp;
    temp->pre=tail;
    tail=temp;
    }
}
void insertatpos(Node* &tail,int pos,int data,Node* &head){
    if(pos==1){
        insertathead(tail,head,data);
        return ;
    }
    int c=1;
    Node* temp=head;
    while(c<pos-1){
       temp=temp->next;
       c++;
    }
    if(temp->next==NULL){
        insertattail(tail,head,data);
        return;
    }
    Node* insert=new Node(data);
    insert->next=temp->next;
    temp->next->pre=insert;
    temp->next=insert;
    insert->pre=temp;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void getlen(Node* &head){
    Node* temp=head;
    int c=0;
    while(temp!=NULL){
        c++;
        temp=temp->next;
    }
    cout<<"length of linkedlist : "<<c<<endl;
}
int main(){
  Node* head=NULL;
  Node* tail=NULL;
  print(head);
  insertathead(tail,head,90);
  print(head);
  insertattail(tail,head,56);
  insertattail(tail,head,78);
  print(head);
  getlen(head);
  insertatpos(tail,2,100,head);
  cout<<tail->data<<endl;
  print(head);
  insertatpos(tail,1,340,head);
  print(head);
  insertatpos(tail,6,700,head);
  print(head);
  getlen(head);
}