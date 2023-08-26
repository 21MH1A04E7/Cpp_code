#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Deque{
   public:
   int *arr;
   int size;
   int front;
   int rear;
   Deque(int size){
    this->size=size;
    arr=new int[size];
    front=rear=-1;
   }
   void push_front(int data){
       if(front==0 && rear==size-1){//check full or not
        cout<<"deque is over flow"<<endl;
        return ;
       }
       else  if(front==-1){//front is initail position
        front=rear=0;
        arr[front]=data;
       }
       else if(front==0 && rear!=size-1){//maintain circular nature
        front=size-1;
        arr[front]=data;
       }
       else{
        front--;//normal condition
        arr[front]=data;
       }
   }
   void push_back(int data){
          if(front==0 && rear==size-1){//check full or not
            cout<<"deque is over flow"<<endl;
            return ;
          }
          else if(front==-1){//only one element is presant
            front=rear=0;
            arr[rear]=data;
          }
          else if(rear==size-1 && front!=0){//rear is in last index
               rear=0;
               arr[rear]=data;
          }
          else{//normal push
            rear++;
            arr[rear]=data;
          }
     return ;
   }
  void pop_front(){
    if(front==-1){//empty condition
        cout<<"deque is under flow"<<endl;
        return ;
    }
    int val=arr[front];
    arr[front]=-1;
    if(front==rear){
        front=rear=-1;
    }else if(front==size-1){
        front=0;
    }
    else{
        front++;
    }
    cout<<"pop element is "<<val<<endl;
    return;
  }
   void pop_back(){
    if(front==-1){//empty condition
        cout<<"deque is under flow"<<endl;
        return ;
    }
    int val=arr[rear];
    arr[rear]=-1;
    if(front==rear){
        front=rear=-1;
    }else if(rear==0){
        rear=size-1;
    }
    else{
        rear--;
    }
    cout<<"pop element is "<<val<<endl;
    return;
  }
  void getfornt(){
    if(front==-1 ){
        cout<<"empty "<<endl;
        return;
    }
    cout<<arr[front]<<endl;
  }
};
int main(){
  /*d.push_back(9);
  d.push_front(7);
  cout<<d.front()<<endl;
  cout<<d.back()<<endl;
  d.pop_front();
  cout<<"print the value"<<endl;
  cout<<d.front()<<endl;
  cout<<d.back()<<endl;*/

}