#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
//generic way
template <typename T>
class graph{
    public:
    unordered_map<T,list<T>>adj;
    //u first adge and v is second edge
    void addedge(T u,T v,bool direction){
        //direction=0 ->undirected
        //direction=0 ->directed
        adj[u].push_back(v);
        if(direction==0){
            //undirected graph
            adj[v].push_back(u);
        }
    }
   void printAdjList(){
       for(auto it:adj){
        cout<<it.first<<"-> ";
        for(auto j:it.second){
           cout<<j<<", ";
        }
        cout<<endl;
       }
   }

};
int main(){
   int n;
   cout<<"Enter the number of nodes"<<endl;
   cin>>n;//
   int m;//6
   cout<<"Enter the number of edges"<<endl;
   cin>>m;
   graph<int> g;
   //creating a graph;
   for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    //creating a undirected graph
    g.addedge(u,v,0);//inserting in a graph;
   }
   g.printAdjList();
   /*
0 1
1 2
2 3
3 1
3 4
0 4*/
}
