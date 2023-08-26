#include<iostream>
using namespace std;
void rev(char arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s++],arr[e--]);
    }
}
int fun(char arr[]){
int cout=0;
for(int i=0;arr[i]!='\0';i++){
    cout++;
}
return cout;
}
int main(){
    char arr[10];
    cin>>arr;
    cout<<arr;
    int n=fun(arr);
    cout<<"the length is "<<n<<endl;
    cout<<"reverse the stirng "<<endl;
    rev(arr,n);
    cout<<arr;
}