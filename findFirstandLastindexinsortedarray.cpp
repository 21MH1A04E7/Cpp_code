#include<iostream>
using namespace std;
int fun2(int arr[],int n,int key){
    int s=0,e=n-1,l=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key){
            l=mid;
            s=mid+1;
        }else if(arr[mid]>key){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }return l;
}
int fun(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int f=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key){
            f=mid;
            e=mid-1;
        }else if(key>arr[mid]){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }return f;
}
int main(){
    int n;
    cout<<" enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int key;
    cout<<"enter the key "<<endl;
    cin>>key;
    cout<<"the first occurrence is "<<fun(arr,n,key)<<endl;
    cout<<"the last index is "<<fun2(arr,n,key)<<endl;
}