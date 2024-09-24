#include<bits/stdc++.h>
using namespace std;


#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define range(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define input(n, arr) for(int i = 0; i < (n); ++i) cin >> (arr)[i];

const int INF = 1<<29;
using ll= long long;
const ll N= 5005;
ll dp[N][N], sum[N][N];


void solve(){

   int n;cin>>n;
   ll arr[n];for(int i=0; i<n; i++) cin>>arr[i];
   
   for (int i=0; i<n; i++){
    ll curr=0;
    for (int j=i; j<n; j++){
        curr+=arr[j];
        sum[i][j]=curr;
    }
   }
   for (int i=n-1; i>=0; i--){
    for (int j=0; j<n; j++){
        if (i>j) continue;
        if (i==j) dp[i][j]=arr[i];
        else{
            dp[i][j]=max(arr[i]+sum[i+1][j]-dp[i+1][j],
                        arr[j]+ sum[i][j-1]-dp[i][j-1]);

        }
    }
   }
   cout<<dp[0][n-1]<<endl;


}

int main(){
  ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);

  int t=1;
  // cin>>t;
  for(int i=0;i<t;i++){
    //cout << fixed << setprecision(10);
    solve();
    // cout<<endl;
  }
}