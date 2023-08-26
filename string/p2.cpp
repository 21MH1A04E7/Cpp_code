#include<iostream>
using namespace std;
int fun(int arr[],int n){
    int s=0;
    int e=n-1;
        while(s<e){
            int mid=s+(e-s)/2;
            if(arr[mid]>=arr[0]){
                s=mid+1;
            }else{
                e=mid;
            }
        }
    return s;
}
int main(){
    int arr[35]={7,9,1,3,5};
    int a=fun(arr,5);
    cout<<a;
}