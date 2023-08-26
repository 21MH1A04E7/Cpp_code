#include<iostream>
#include<queue>
using namespace std;
int main(){
    //max heap priority queue
    priority_queue<int>pq;
    pq.push(6);
    pq.push(8);
    pq.push(2);
    pq.push(9);
    pq.push(4);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    //declearation of min heap priority queue
    priority_queue<int,vector<int>,greater<int>>minheap;
    minheap.push(90);
    minheap.push(45);
    minheap.push(78);
    minheap.push(34);
    minheap.push(24);
    cout<<minheap.top()<<endl;
    minheap.pop();
    cout<<minheap.top()<<endl;
    cout<<"<------>"<<endl;
    while(!minheap.empty()){
        cout<<minheap.top()<<" ";
        minheap.pop();
    }
}