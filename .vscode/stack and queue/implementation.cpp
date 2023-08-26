#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int index;
    int *arr;
    int size;
    Stack(int size){
      this->size=size;
      arr=new int[size];
      this->index=-1;
    }
    void push(int element){
      if(size-index>1){
         index++;
         arr[index]=element;
      }else{
         cout<<"stack is overflow"<<endl;
      }
    }
    void pop(){
      if(index!=-1){//index>=0
         index--;
      }else{
         cout<<"stack is underflow"<<endl;
      }
    }
    int top(){
      if(index!=-1){
         return arr[index];
      }
    }
    bool empty(){
      if(index==-1){
         return true;
      }else{
         return false;
      }
    }
};
int main(){
   Stack st(2);
   st.push(6);
   st.push(8);
   cout<<st.top()<<endl;
   st.pop();
   cout<<st.top()<<endl;
   st.pop();
  /* cout<<st.top()<<endl;;
   st.push(7);
   cout<<st.top()<<endl;
   cout<<st.empty()<<endl;
   st.pop();
   cout<<st.top()<<endl;
   st.pop();
   cout<<st.empty()<<endl;
   st.push(4);
   st.push(8);
   st.push(4);
   st.push(8);
   st.push(4);
   st.push(8);*/

}