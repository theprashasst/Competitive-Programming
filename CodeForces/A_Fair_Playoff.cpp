#include<bits/stdc++.h>
using namespace std;

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define range(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define input(n, arr) for(int i = 0; i < (n); ++i) cin >> (arr)[i];

const int INF = 1<<29;
typedef long long ll;


void solve(){

   int maxf=0,minf=100,mins=100,maxs=0;
   range(i,4){
    int x;cin>>x;
    if (i<2) {
        maxf=max(maxf,x);
        minf=min(minf,x);
        }
    else {
        mins=min(mins,x);
        maxs=max(maxs,x);
        }
   }
   if (mins>maxf || minf>maxs) cout<<"NO";
   else cout<<"YES";

}

int main(){
  ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);

  int t=1;
  cin>>t;
  for(int i=0;i<t;i++){
    solve();
    cout<<endl;
  }
}