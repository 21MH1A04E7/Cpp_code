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
Node* buildtree(Node* root){
    int data;
    cout<<"enter the data "<<endl;
    cin>>data;
    root=new Node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"inserting data for left node : "<<data<<endl;
    root->left=buildtree(root->left);
    cout<<"inserting data for right Node : "<<data<<endl;
    root->right=buildtree(root->right);
    return root;

}
void postorder(Node* root){
   if(root==NULL){
    return ;
   }
   postorder(root->left);
   postorder(root->right);
   cout<<root->data<<" ";
}
void preorder(Node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void ierativeinorder(Node* root){
        stack<Node*>st;
        Node* temp=root;
        while(true){
            if(temp!=NULL){
                st.push(temp);
                temp=temp->left;
            }else{
                if(st.empty()==true)
                break;//if no element is present
                temp=st.top();
                st.pop();
                cout<<temp->data<<" ";
                temp=temp->right;
            }
        }
}
void iterativepreorder(Node* root){
    stack<Node*>st;
    st.push(root);
    while(!st.empty()){
        Node* temp=st.top();
        st.pop();
        cout<<temp->data<<" ";
        if(temp->right!=NULL){
            st.push(temp->right);
        }
        if(temp->left!=NULL){
            st.push(temp->left);
        }
    }
}
void iterativepostorder(Node* root){
    stack<Node*>st1;
    stack<Node*>st2;
    st1.push(root);
    while(!st1.empty()){
          Node* temp=st1.top();
          st1.pop();
          st2.push(temp);
          if(temp->left){
            st1.push(temp->left);
          }
          if(temp->right){
            st1.push(temp->right);
          }
    }
    while(!st2.empty()){
        Node* temp=st2.top();
        st2.pop();
        cout<<temp->data<<" ";
    }
}
int main(){
   Node* root=NULL;
   root=buildtree(root);
//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

   preorder(root);
   cout<<endl;
   iterativepreorder(root);
   cout<<endl<<"inorder traverser : "<<endl;
   ierativeinorder(root);
   cout<<endl<<"postorder traverser: "<<endl;
   postorder(root);
   cout<<endl<<"postorder traverser by iterative way :"<<endl;
   iterativepostorder(root);
}