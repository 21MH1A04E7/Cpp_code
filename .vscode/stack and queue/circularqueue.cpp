#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Queue{//implementation of circular queue
    public:
    int *arr;
    int size;
    int front;
    int rear;
    Queue(int size){
        this->size=size;
        arr=new int[size];
        front=rear=-1;//initially front and rear is -1
    }
    void push(int data){
        if((front==0 && rear==size-1)||(rear==(front-1)%(size-1))){//cheacking over flow condition
            cout<<"queue is over flow"<<endl;
            return ;
        }else
        if(front==-1){//no element is present in queue
            front=rear=0;
            arr[rear]=data;
        }else if(rear==size-1 && front!=0){//front will not in zero index but rear reaches to last 
        //maintaining circular nature
              rear=0;
              arr[rear]=data;
        }else{//normal push
            rear++;
            arr[rear]=data;
        }
        return;
    }
    void pop(){
        if(front==-1){//no element is present in queue
            cout<<"queue is under flow"<<endl;
            return ;
        }else if(front==rear){//only one element is there
             cout<<"poping element "<<arr[front]<<endl;
              front=rear=-1;
        }else if(front==size-1){//front reaches at last index
            cout<<"poping element "<<arr[front]<<endl;
             front=0;
        }else{//normal codition
            cout<<"poping element "<<arr[front]<<endl;
            front++;
        }
        return ;
    }
    void top(){
         if(front==-1){
            cout<<"queue is empty"<<endl;
         }else{
            cout<<arr[front]<<endl;
         }
    }
};
int main(){
      Queue q(5);
      q.push(2);
      q.push(7);
      q.push(7);
      q.push(7);
      q.push(7);
      q.pop();
      q.push(5);
}