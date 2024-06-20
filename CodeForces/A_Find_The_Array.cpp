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
  //  if (n==1){ cout<<1;return;}
  //  double ans=  (1.0 + sqrt(1+ 4*n))/2;
  int sum=1,ans=1;
  while(sum<n){
    ans+=1;
    sum= ans*ans;
    // DEBUG(ans)
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
    cout<<"\n";
  }
}