#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//max heap
class heap{//creating a class
   public:
   int size;//declearing a size
   int arr[1000];//declearing a array
   heap(){
     arr[0]=-1;//taking fist element is -1
     this->size=0;//ans size is one;
   }
   void insert(int val){
        size=size+1;//increase the size
        int index=size;//take last index
        arr[index]=val;//insert the value
        while(index>1){
            int parent=index/2;//finding the parent index of respective node(element or index)
            if(arr[parent]<arr[index]){//if less than parent element the swap
                 swap(arr[parent],arr[index]);
                 index=parent;//updating index
            }else{
                return ;//it is on corrent position (return )
            }
        }
   }
   void deleteheap(){
    if(size==0){
        cout<<"no need to delete (element is not there in heap)"<<endl;
        return ;
    }
    arr[1]=arr[size];//replace data with root node
    size--;//decreament the size
    int i=1;//intial size
    while(i<size){//loop condition
        int leftindex=2*i;//finding left index
        int rightindex=2*i+1;//finding right index
        if(leftindex<size && arr[i]<arr[leftindex]){//checking left condition or bounding condition
            swap(arr[i],arr[leftindex]);//swap 
            i=leftindex;//updating i value
        }else if(rightindex<size && arr[i]<arr[rightindex]){//checking right condition or bounding condition
            swap(arr[i],arr[rightindex]);//swap
            i=rightindex;//updating i value
        }else{
            return ;//it reached on right position(return );
        }
    }
   }
   void print(){
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
   }
};
//heapify algorithm
void heapify(int *arr,int n,int index){//arr ,size index//this is one based indexing code
        int largest=index;
        int left=2*index;//left index
        int right=2*index+1;//right index
        if(left<=n && arr[largest]<arr[left]){//left index condition
            largest=left;
        }else
        if(right<=n&& arr[largest]<arr[right]){//right index condition
            largest=right;
        }
        if(largest!=index){//checking for update
            swap(arr[largest],arr[index]);
            heapify(arr,n,largest);//calling for reaming position
        }
}
void heapsort(int *arr,int n){
    int size=n;//last element
    for(int i=n;i>=1;i--){
        swap(arr[i],arr[1]);
        heapify(arr,i,1);
    }
}
int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deleteheap();
    h.print();
    //suppose we have a array
    int arr[6]={-1,54,53,55,52,50};//giving array for node 
    int n=5;
    for(int i=n/2;i>0;i--){//proccessing n/2 node to 1 node(because left node has already heap)
        heapify(arr,n,i);//calling the heapify function
    }
    cout<<"printing the array"<<endl;
    for(int i=1;i<=n;i++){//
        cout<<arr[i]<<" ";
    }cout<<endl;
    //
    heapsort(arr,n);
    cout<<"printing array after heap sort"<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}