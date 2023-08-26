#include<iostream>
using namespace std;

void margeshort(int *arr,int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++)
    a[i]=arr[l+i];
    for(int i=0;i<n2;i++)
    b[i]=arr[mid+i+1];
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            i++;
            k++;
        }else{
            arr[k]=b[j];
            j++;k++;
        }
    }
    while(i<n1){
        arr[k]=arr[i];
        k++;i++;
    }
    while(j<n2){
        arr[k]=arr[j];
        k++;j++;
    }
}
void marge(int *arr,int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        marge(arr,l,mid);
        marge(arr,mid+1,r);
        margeshort(arr,l,mid,r);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>n;
    }
    marge(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}