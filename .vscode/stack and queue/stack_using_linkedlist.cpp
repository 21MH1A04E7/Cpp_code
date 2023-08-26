#include<iostream>
#include<bits/stdc++.h>
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
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"deleting data "<<val<<endl;
    }
};
class Stack {
    Node* head;
    int size;
    public:
    Stack(){
        head=NULL;
        size=0;
    }
    void push(int data){
       Node* temp=new Node(data);
       temp->next=head;
       head=temp;
       size++;
    }
    void pop(){
        if(head==NULL){//checking under flow condition
            cout<<"stack is under flow"<<endl;
            return ;
        }
       else{
         Node* temp=head;
        head=temp->next;
        temp->next=NULL;
        delete temp;
        size--;
       }
    }
    void stacksize(){
        cout<<endl<<"size of stack is : "<<size<<endl;
    }
    int top(){
        if(head==NULL){
            //cout<<"stack is empty"<<endl;
            return -1;
        }else{
            return head->data;
        }
    }
    void empty(){
        if(head==NULL){
            cout<<"stack is empty"<<endl;
        }else{
           cout<<"stack is not empty"<<endl;
        }
    }
};
int main(){
    Stack st;
    st.empty();
    st.push(6);
    st.push(7);
    cout<<st.top()<<endl;
    st.stacksize();
}