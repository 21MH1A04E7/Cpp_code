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
//getmaximum by recursion
int getmaximum(Node* root){
    if(root->right==NULL){
        return root->data;
    }
    getmaximum(root->right);
}
//getminimum by recursion
int getminimum(Node* root){
    if(root->left==NULL){
        return root->data;
    }
    getminimum(root->left);
}
//getmaximum by loop
int getmaxi(Node* root){
    Node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp->data;
}
//getminimum by loop
int getmin(Node* root){
    Node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->data;
}
int main(){
    Node* root=NULL;
    takeinput(root);
    inorder(root);
    cout<<endl;
    cout<<getmaximum(root);
    cout<<endl;
    cout<<getminimum(root);
    cout<<endl;
    cout<<getmaxi(root);
    cout<<endl;
    cout<<getmin(root);
}