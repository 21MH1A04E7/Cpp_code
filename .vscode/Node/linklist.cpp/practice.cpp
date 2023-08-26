#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* pre;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->pre=NULL;
    }
    ~Node(){
        int val=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<" memory is free for  "<<val<<endl;
    }
};
void insertathead(Node* &head,int data){
        Node* temp=new Node(data);
        temp->next=head;
        head->pre=temp;
        head=temp;
}
void insertattail(Node* &tail,int data){
       Node* temp=new Node(data);
       tail->next=temp;
       temp->pre=tail;
       tail=temp;
}
void insertatpos(Node* &tail,Node* &head,int pos,int data){
    if(pos==1){
        insertathead(head,data);
        return ;
    }else{
        Node* temp=head;
        int c=1;
        while(c<pos-1){
            temp=temp->next;
            c++;
        }
        if(temp->next==NULL){
            insertattail(tail,data);
            return ;
        }
        Node* newnode=new Node(data);
        newnode->next=temp->next;
        temp->next->pre=newnode;
        temp->next=newnode;
        newnode->pre=temp;

    }
}
void deleting(Node* &head,int pos){
    if(pos==1){
        Node* temp=head;
        temp->next->pre=NULL;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        int c=1;
        Node* curr=head;
        Node* pre=NULL;
        while(c<pos){
            pre=curr;
            curr=curr->next;
            c++;
        }
        curr->pre=NULL;
        pre->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
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
    insertathead(head,6);
    insertattail(tail,8);
    insertathead(head,4);
    insertattail(tail,14);
    insertatpos(tail,head,6,40);
    deleting(head,6);
    print(head);
}