#include <iostream>
using namespace std;
int margeshort(int arr[],int l,int mid,int r){
	int n1=mid-l+1;
	int n2=r-mid;
	int a[n1],b[n2];
	for(int i=0;i<n1;i++){
		a[i]=arr[l+i];
	}
	for(int i=0;i<n2;i++){
		b[i]=arr[mid+1+i];
	}
	int i=0,j=0,k=l;
	while(i<n1 && j<n2){
		if(a[i]<b[i]){
			arr[k]=a[i];
			k++;i++;
		}else{
			arr[k]=b[j];
			j++;k++;
		}
	}
	while(i<n1){
		arr[k]=a[i];
		k++;i++;
	}
	while(j<n2){
		arr[k]=b[j];
		j++;k++;
	}
}
int marge(int arr[],int l,int r){
	if(l<r){
		int mid=(l+r)/2;
		marge(arr,l,mid);
		marge(arr,mid+1,r);
		margeshort(arr,l,mid,r);
	}
}
int main() {
	int arr[]={5,4,3,1,2};
	marge(arr,0,4);
	for(int i=0;i<5;i++)
	cout<<arr[i]<<" ";
	return 0;
}
