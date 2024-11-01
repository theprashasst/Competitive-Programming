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
   ll ans=0;
   vector<ll> arr(n,0);
   for (int i=0;i<n;i++){
    cin>>arr[i];
   }
   for (int i=0; i<n-1;i++){
    ll mxx=arr[i],mn=arr[i];
    for (int j=i+1;j<n;j++){
        mxx=max(arr[j],mxx);
        mn=min(arr[j],mn);
        ans=max(ans,mxx*mn);
    }
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