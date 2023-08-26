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
void incordered(Node* root){
    if(root==NULL){
        return ;
    }
    //left call
    incordered(root->left);
    cout<<root->data<<" ";
    incordered(root->right);

}
void preordered(Node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preordered(root->left);
    preordered(root->right);
}
void posordered(Node* root){
     if(root==NULL){
        return ;
     }
     posordered(root->left);
     posordered(root->right);
     cout<<root->data<<" ";
}
void levelbuild(Node* &root){
    int data;
    cout<<"enter data "<<endl;
    cin>>data;
    root=new Node(data);
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        int leftdata;
        cout<<"enter data for "<<temp->data<<endl;
        cin>>leftdata;
        if(leftdata!=-1){
            temp->left=new Node(leftdata);
            q.push(temp->left);
        }
        int rightdata;
        cout<<"enter data for "<<temp->data<<endl;
        cin>>rightdata;
        if(rightdata!=-1){
            temp->right=new Node(rightdata);
            q.push(temp->right);
        }
    }
}
int main(){
    Node* root=NULL;
    levelbuild(root);
    //root=build(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    level(root);
    cout<<endl;
    incordered(root);
    cout<<endl;
    preordered(root);
    cout<<endl;
    posordered(root);
}