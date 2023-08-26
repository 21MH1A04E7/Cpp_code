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
void leveorder(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
        }
    }
}
int main(){
  Node* root=NULL;
  cout<<"Enter data to create BST"<<endl;
  takeinput(root);
  leveorder(root);
  return 0;
}