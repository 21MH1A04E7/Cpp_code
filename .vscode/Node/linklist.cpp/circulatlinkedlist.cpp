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
    ~Node(){
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<" memory free for "<<val<<endl;
    }
};
void insert(Node* &tail,int element,int data){
    //assume empyty list
    if(tail==NULL){
       Node* newnode=new Node(data);
       tail=newnode;
       newnode->next=newnode; 
    }else{
        //non empty list
        Node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        Node* temp=new Node(data);
        temp->next=curr->next;
        curr->next=temp;
    }
}
void deleting(Node* &tail,int value){
     //empty list
      if(tail==NULL){
        cout<<"linked list is empty cheack again "<<endl;
        return ;
      }
      else
      {//non empty list
       Node* pre=tail;
       Node* curr=pre->next;
       while(curr->data!=value){
        pre=curr;
        curr=curr->next;
       }
       pre->next=curr->next;
       if(curr==pre){
        tail=NULL;
       }
       else if(tail==curr){
        tail=pre;
       }
       curr->next=NULL;
       delete curr;
      }
}
void print(Node* tail){
    Node* temp=tail;
    if(tail==NULL){
        cout<<"list is empty "<<endl;
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}
int main(){
   Node* tail=NULL;
   insert(tail,4,5);
   insert(tail,5,8);
   insert(tail,8,9);
   insert(tail,5,6);
   deleting(tail,6);
   print(tail);
}