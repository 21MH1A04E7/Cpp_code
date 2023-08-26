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
int minval(Node* root){
    Node* temp=root;
    while(temp->left){
        temp=temp->left;
    }
    return temp->data;
}
//deletion of node from binary search tree
Node* deletion(Node* root,int val){
    if(root==NULL)
    return root;
    if(root->data==val){
     //0 child
     if(root->left==NULL&&root->right==NULL){
        delete root;
        return NULL;
     }
     //1 child
     if(root->left==NULL && root->right!=NULL){
        Node* temp=root->right;
        delete root;
        return temp;
     }
     //1 chidl for left
     if(root->left!=NULL && root->right==NULL){
        Node* temp=root->left;
        delete root;
        return temp;
     }
     //2 child
     if(root->left!=NULL && root->right!=NULL){
      int min=minval(root->left);
      root->data=min;
      root->right=deletion(root->right,min);
      return root;
     }
    }else if(root->data>val){
            root->left=deletion(root->left,val);
            return root;
        }
    else{
        root->right=deletion(root->right,val);
        return root;
    }
}
Node* build(Node *root){
        int data;
        cout<<"enter data "<<endl;
        cin>>data;
        root=new Node(data);
        if(data==-1){
            return NULL;
        }
        cout<<"inserting for left "<<data<<endl;
        root->left=build(root->left);
        cout<<"inserting for right "<<data<<endl;
        root->right=build(root->right);
        return root;
}
void level(Node* root){
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
        }
        else{
            cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }
    }
}
int main(){
  Node* root=NULL;
  cout<<"Enter data to create BST"<<endl;
  takeinput(root);
  level(root);
  deletion(root,90);
  level(root);
  return 0;
}