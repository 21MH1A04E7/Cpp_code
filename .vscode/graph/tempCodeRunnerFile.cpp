#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class graph{
   public:
   unordered_map<int,list<pair<int,int>> >adj;
   void addEdge(int u,int v,int weight){
    pair<int,int>p=make_pair(v,weight);
    adj[u].push_back(p);
   }
   void printadj(){
      for(auto i:adj){
        cout<<i.first<<" --->";
        for(auto j:i.second){
            cout<<"{ "<<j.first<<" , "<<j.second<<" }";
        }
        cout<<endl;
      }
   }
   void dfs(int node,unordered_map<int,bool>&visited,stack<int>&s){
    visited[node]=true;
    for(auto it:adj[node]){
        if(!visited[it.first]){
            dfs(it.first,visited,s);
        }
    }
    s.push(node);
   }
   void getsortedpath(int src,vector<int>&dis,stack<int>&topo){
    dis[src]=0;
    while(!topo.empty()){
        int top=topo.top();
        topo.pop();
        if(dis[top]!=INT_MAX){
            for(auto i:adj[top]){
                if(dis[top]+i.second<dis[i.first]){
                    dis[i.first]=dis[top]+i.second;
                }
            }
        }
    }
   }
};
int main(){
  graph g;
  g.addEdge(0,1,5);
  g.addEdge(0,2,3);
  g.addEdge(1,2,2);
  g.addEdge(1,3,6);
  g.addEdge(2,3,7);
  g.addEdge(2,4,4);
  g.addEdge(2,5,2);
  g.addEdge(3,4,-1);
  g.addEdge(4,5,-2);
  g.printadj();
  int n=6;
  //topological sort
  unordered_map<int,bool>visited;
  stack<int>s;
  for(int i=0;i<n;i++){
    if(!visited[i]){
        g.dfs(i,visited,s);
    }
  }
  int src=1;
  vector<int>dis(n);
  for(int i=0;i<n;i++){
    dis[i]=INT_MAX;
  }
  g.getsortedpath(src,dis,s);
  cout<<"answer is "<<endl;
  for(int i=0;i<dis.size();i++){
    cout<<dis[i]<<endl;
  }
}   