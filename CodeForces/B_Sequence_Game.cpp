#include<bits/stdc++.h>
using namespace std;


#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define range(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define input(n, arr) for(int i = 0; i < (n); ++i) cin >> (arr)[i];

const int INF = 1<<29;
using ll= long long;


void solve(){

   int n;cin>>n;
   vector<int> ans;
   int first;cin>>first;
   ans.push_back(first);
   for (int i=1; i<n; ++i){
    int x;cin>>x;
    // cout<<i<<" "<<x<<" "<<ans.back()<<"\n";
    if (ans.back()>x){
        ans.push_back(1);
    }
    ans.push_back(x); 
    
   }
   cout<<ans.size()<<"\n";
   for (auto i: ans){
    cout<<i<<" ";
   }

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