#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    //insertion time complexity O(log(n))
   public:
   int data;
   Node* left;
   Node* right;
   Node(int data){
    this->data=data;
    this->left=NULL;
    this->right=NULL;
   }
};
Node* insertatBst(Node* root,int data){
      if(root==NULL){
        root=new Node(data);
        return root;
      }
      if(data>root->data){
        //inserting in right part;
        root->right=insertatBst(root->right,data);
      }
      else{
        //insert in left part 
        root->left=insertatBst(root->left,data);
      }
      return root;
}
void takeinput(Node* &root){
    int data;
    cout<<"enter data "<<endl;
    cin>>data;
    while(data!=-1){
      root=insertatBst(root,data);
      cin>>data;
    }
}
void inorder(Node* root){
    if(root==NULL)
    return ;
    inorder(root->left);
    cout<<(root->data)<<" ";
    inorder(root->right);
}
//successer 
int successerBST(Node* root,int val){
    Node* temp=root;
    int ans=-1;
    while(temp!=NULL){
        if(val>=temp->data){//if val is greater than current node val
           temp=temp->right;//then in right
        }else{
            ans=temp->data;//it possible ans
            temp=temp->left;
        }
    }
    return ans;
}
//predcesser
int predecesser(Node* root,int val){
    Node* temp=root;
    int ans=-1;
    while(temp!=NULL){
        if(val<=temp->data){
            temp=temp->left;
        }else{
            ans=temp->data;
            temp=temp->right;
        }
    }
    return ans;
}
int main(){
    Node* root=NULL;
    takeinput(root);
    inorder(root);
    cout<<endl;
    cout<<successerBST(root,5);
    cout<<endl;
    cout<<predecesser(root,5);
}