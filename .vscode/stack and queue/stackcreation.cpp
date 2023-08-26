#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //syntax of stack | stack<data type>stackname:
    stack<int>s;
    //Stack is a data structure designed to operate in LIFO (Last in First out) context
    //last in first out
    //push opreration inserting at top 
    s.push(3);
    //insert the element at top of stack
    s.push(4);
    //pop operation removed the  element from top of stack
    cout<<s.top()<<endl;
    //size of stack
    cout<<"size of stack is :: "<<s.size()<<endl;
    //checking stack is empty or not
    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }else{
        cout<<"stack is not empty"<<endl;
    }
}