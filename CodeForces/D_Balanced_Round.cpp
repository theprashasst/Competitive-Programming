#include<bits/stdc++.h>
using namespace std;


#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define range(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define input(n, arr) for(int i = 0; i < (n); ++i) cin >> (arr)[i];

const int INF = 1<<29;
using ll= long long;


void solve(){

   int n,diff;cin>>n>>diff;
   vector<int> arr(n,0); for(int i=0; i<n;i++) cin>>arr[i];
   sort(arr.begin(),arr.end());
   int c=1,ans=1;
   for (int i=1; i<n; i++){
    if ((arr[i]- arr[i-1])  <=diff){ c+=1;ans=max(ans,c);}
    else c=1;
   }
   cout<<n-ans;
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