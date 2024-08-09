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
   int ans=0;
   if (n<10) ans+=n%10;
   else if (n<100) ans+= 9 + n/10;
   else if (n<1000) ans += 9*2 + n/100;
   else if (n<10e3) ans += 9*3 + n/1000;
   else if (n<10e4) ans += 9*4 + n/10000;
   else if (n<10e5) ans += 9*5 + n/100000;
   else if (n<10e6) ans += 9*6 + n/1000000;
   else             ans += 9*7 + n/10000000;
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