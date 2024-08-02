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
   int maxc=0;
   int cons=0,total=0;
   bool last=false;
   for (int i=0; i<n; i++){
    char x;cin>>x;
    if (x=='.'){
        if (last) {
            cons++;
            maxc=max(maxc,cons);
        }
        else cons=1;
        total++;
        last=true;
    }
    else {
        last=false;
        cons=0;
    }
   }
   if (maxc>=3) cout<<2;
   else cout<<total;

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