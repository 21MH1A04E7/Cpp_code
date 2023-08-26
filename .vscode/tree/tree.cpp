#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
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
Node* bulidtree(Node* root){
 cout<<"enter the data : "<<endl;
 int data;
 cin>>data;
 root=new Node(data);
 //we are conserding -1 is null
 if(data==-1){
    return NULL;
 }
 cout<<"enter data for insearting in left node: "<<data<<endl;
 root->left=bulidtree(root->left);
 cout<<"enter data for insearting in right Node: "<<data<<endl;
 root->right=bulidtree(root->right);
 return root;
}
void levelOrderTraverse(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);//sperator using to break the line
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(temp==NULL){//previous leve has completed
            cout<<endl;
            if(!q.empty()){//still have some node
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left!=NULL){//inserting left side node in queue
            q.push(temp->left);
        }
        if(temp->right!=NULL){//inserting right side node in queue
            q.push(temp->right);
        }
    }
   }
}
//inorder traversal LNR
void inorder(Node* root){
   // Node* temp=root;
    if(root==NULL){
        return;
    }
    //go to left
    inorder(root->left);
    //print data
    cout<<root->data<<" ";
    //go to right
    inorder(root->right);
}
//preorder traversal
void preorder(Node* root){//NLR traversal
    Node* temp=root;
    if(temp==NULL){
        return ;
    }
    cout<<temp->data<<" ";
    preorder(temp->left);
    preorder(temp->right);
}
void postorder(Node* root){
    Node* temp=root;
    if(temp==NULL){
        return ;
    }
    postorder(temp->left);
    postorder(temp->right);
    cout<<temp->data<<" ";
}
// build a tree by levelorder
void buildtreebylevelorder(Node* &root){
      int data;
      cout<<"enter the data: "<<endl;
      cin>>data;
      root=new Node(data);
      queue<Node*>q;
      q.push(root);
      while(!q.empty()){
        Node* temp=q.front();
        q.pop();
      int leftdata;//insert for left 
      cout<<"enter left data for  "<<temp->data<<endl;
      cin>>leftdata; 
      if(leftdata!=-1){
        temp->left=new Node(leftdata);
        q.push(temp->left);
      }
        int rightdata;//inserting for right
        cout<<"enter right data for  "<<temp->data<<endl;
        cin>>rightdata; 
      if(rightdata!=-1){
      temp->right=new Node(rightdata);
      q.push(temp->right);
      }
      }
}
int main(){
    //binary tree is nonlinear data-structure which have less than two number of child nodes
    //first node is called root
    //last of node is called leap 
    //creation of binary tree
   Node* root=NULL;//creating a root node 
   buildtreebylevelorder(root);//1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1 
   levelOrderTraverse(root);
   preorder(root);
   //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
  /*/ root=bulidtree(root); 
   levelOrderTraverse(root);
   cout<<"print inorder traversal "<<endl;
    inorder(root);
    cout<<endl;
    cout<<"print preorder traversal "<<endl;
    preorder(root);
    cout<<endl;
    cout<<"printing post order traversal"<<endl;
    postorder(root);*/
}