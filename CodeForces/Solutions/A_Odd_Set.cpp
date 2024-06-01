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
   int x;
   int odd=0,even=0;
   
   range(i,2*n){
    cin>>x;
    // DEBUG(x)
    if (x%2==0) odd++;
    else even++;
    // DEBUG(odd)
    // DEBUG(even)
   }

   if (odd==even) cout<<"Yes"<<"\n";
   else cout<<"No"<<"\n";

}

int main(){
  ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);

  int t=1;
  cin>>t;
  for(int i=0;i<t;i++){
    solve();
  }
}