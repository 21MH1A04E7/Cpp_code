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
void inserthead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
void inserttail(Node* &tail,int d){
    Node* temp=new Node(5);
    tail->next=temp;
    tail=temp;
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
   Node* node1=new Node(5);
   Node* head=node1;
   Node* tail=node1;
   inserthead(head,7);
   inserttail(tail,9);
   print(head);

}