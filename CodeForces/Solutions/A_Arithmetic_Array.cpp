#include<bits/stdc++.h>
using namespace std;

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define range(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define input(n, arr) for(int i = 0; i < (n); ++i) cin >> (arr)[i];

const int INF = 1<<29;
typedef long long ll;


void solve(){

   int n;cin>>n;
   int sum=0;
   range(i,n){
    int x;cin>>x;
    sum+=x;
   }
   if (sum==n) cout<<0;
   else if (sum>n) cout<<sum-n;
   else cout<<1;

}

int main(){
  ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);

  int t=1;
  cin>>t;
  for(int i=0;i<t;i++){
    solve();
    cout<<"\n";
  }
}