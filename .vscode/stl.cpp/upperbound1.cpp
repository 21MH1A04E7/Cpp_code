#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    //lower bound it will find the given element and it will return iterator of that element
    //in case if element will not present in array then it will return iterator of next element
    //1 4 5 8 9
    //lower_bound(arr,arr+n,6)
    //it will return address of next element (mean 8) because 6 is not present in this array
    int *ptr=lower_bound(arr,arr+n,6);
    cout<<*ptr<<endl;//8
    if(ptr==arr+n){
        cout<<"element is not found"<<endl;
    }
    int *p=lower_bound(arr,arr+n,5);
    cout<<*p<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //it will return  next iterator of given value which will be present in array 
    int *it=upper_bound(arr,arr+n,2);
    cout<<endl<<*it<<endl;
}