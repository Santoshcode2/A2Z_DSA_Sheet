#include <iostream>
#include<vector>
using namespace std;
int main(){
  int n,m;
   cin>>n>>m;
   vector<int>adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v; 
        /*on the uth index will you please put v & vice versa */
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
   return 0;
}
// if it is directed graph hoga to we don't require line 13
//in a directed graph S.C=O(E) where E=no of edges
// 