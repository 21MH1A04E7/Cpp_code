#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool should_i_swap(int a,int b){//comparator function code
    if(a>b)
    return true;
    return false;
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){//this is a simple code for sorting algorithm
          for(int j=1+i;j<n;j++){
            if(should_i_swap(arr[i],arr[j])){//comparator function 
                swap(arr[i],arr[j]);
            }
          }
    }
    cout<<"prinring after sorting "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}