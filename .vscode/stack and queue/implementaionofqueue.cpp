//if is the type of data sturcture 
//which is base in FIFO (first in first out )
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Queue{
   public:
   int *arr;
   int size;
   int front;
   int rear;
   Queue(int size){
        this->size=size;
        arr=new int[size];
         front=0;
         rear=0;
   }
   void push(int data){
    if(rear<size){
      arr[rear]=data;
      rear++;
    }else{
      cout<<"queue over flow "<<endl;
    }
   }
   void pop(){
    if(front==rear){
      cout<<"queue under flow"<<endl;
    }else{
      int val=arr[front];
      front++;
      cout<<val<<endl;
      if(front==rear){
        front=0;
        rear=0;
      }
    }
   }
   void sizeoff(){
       if(front==size){
        cout<<"0"<<endl;
       }else{
        cout<<"size of queue is "<<rear-front<<endl;
       }
   }
   void frontoff(){
    if(front==rear){
      cout<<"queue is empty "<<endl;
    }else{
      cout<<arr[front]<<endl;
    }
   }
};
using namespace std;
int main(){
   Queue q(5);
   q.push(7);
   q.push(8);
   q.push(9);
   q.push(12);
   q.push(1);
   q.sizeoff();
}