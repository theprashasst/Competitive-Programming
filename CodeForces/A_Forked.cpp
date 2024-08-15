#include<bits/stdc++.h>
using namespace std;


#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define range(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define input(n, arr) for(int i = 0; i < (n); ++i) cin >> (arr)[i];

const int INF = 1<<29;
using ll= long long;


void solve(){

   int a,b,xk,yk,xq,yq;cin>>a>>b>>xk>>yk>>xq>>yq;
   int ans=0;
   int x[8]={a,b,-a,b,-a,-b,-b,a};
   int y[8]={b,a,b,-a,-b,-a,a,-b};
   set<pair<int,int>> posk;
   set<pair<int,int>> posq;
   for(int i=0; i<8; i++){
    int king_x=xk+x[i];
    int king_y=yk+y[i];
    int queen_x=xq+x[i];
    int queen_y=yq+y[i];
    posk.insert({king_x,king_y});
    posq.insert({queen_x,queen_y});
   }
   for(auto i:posk){
    if (posq.find(i)!=posq.end()) ans++;
   }
   cout<<ans;

   
   

}

int main(){
  ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);

  int t=1;
  cin>>t;
  for(int i=0;i<t;i++){
    //cout << fixed << setprecision(10);
    solve();
    cout<<endl;
  }
}