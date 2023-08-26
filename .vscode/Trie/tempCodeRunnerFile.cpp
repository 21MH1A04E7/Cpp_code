#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class TrieNode{
  public:
  char data;//
  TrieNode *children[26];
  bool isTerminal;
  TrieNode(char ch){
    data=ch;
    for(int i=0;i<26;i++){//initializing  all is NULL
        children[i]=NULL;
    }
    isTerminal=false;
  }
};
class Trie{
   public:
   TrieNode *root;
   Trie(){
    root =new TrieNode('\0');
   }
   void insertUtill(TrieNode* root,string word){
       //base case
       if(word.length()==0){
        root->isTerminal=true;//last character is terminal 
        return ;
       }
       int index=word[0]-'A';
       TrieNode* child;
       if(root->children[index]!=NULL){ 
        //present
        child=root->children[index];
       }else{
        //absent
        child=new TrieNode(word[0]);
        root->children[index]=child;
       }
       //recursion
       insertUtill(child,word.substr(1));
   }
   void insert(string word){
          insertUtill(root,word);
   }
   
};
int main(){
 Trie *t=new Trie();
 //t.insert("hariom");
 t->insert("hariom");
 cout<<"hti"<<endl;
 //cout<<t->search("hariom");
 cout<<endl;
}