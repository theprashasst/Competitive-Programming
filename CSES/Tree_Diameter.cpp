#include<bits/stdc++.h>
using namespace std;


#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define range(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define input(n, arr) for(int i = 0; i < (n); ++i) cin >> (arr)[i];

const int INF = 1<<29;
using ll= long long;

pair<int,int> dfs(map<int,vector<int>> &tree,int cnode,int mxnode,int dis,int mxdis,vector<bool> &visited){
    visited[cnode]=true;
    if (dis>mxdis){
            mxdis=dis;
            mxnode=cnode;
        }
    for (auto node:tree[cnode]){
        if (visited[node]) continue;
        tie(mxnode,mxdis) =dfs(tree,node,mxnode,dis+1,mxdis,visited);
    }
    return {mxnode,mxdis};


}


void solve(){

   int n;cin>>n;
   map<int,vector<int>> tree;
   for ( int i=0;i<n;i++){
    int u,v;cin>>u>>v;
    tree[u].push_back(v);
    tree[v].push_back(u);
   }
   vector<bool> visited(n+1,false);
   auto [end1,dis1]= dfs(tree,1,1,0,0,visited);
   fill(visited.begin(),visited.end(),false);
   auto [end2,dis2]=dfs(tree,end1,end1,0,0,visited);
   cout<< dis2;


}

int main(){
  ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);

  int t=1;
//   cin>>t;
  for(int i=0;i<t;i++){
    //cout << fixed << setprecision(10);
    solve();
    cout<<endl;
  }
}