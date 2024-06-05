#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define range(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define input(n, arr) for(int i = 0; i < (n); ++i) cin >> (arr)[i];

const int INF = 1<<29;
using ll= long long;


void solve(){

   int n;cin>>n;
   int x=0,y=0,z=0;
   for (int i=0; i<n; i++){
    int a,b,c;
    cin>>a;cin>>b;cin>>c;
    x+=a; y+=b; z+=c;
    // DEBUG(x) DEBUG(y) DEBUG(z)
   }
   if ((x==0) and  (y==0) and( z==0)) cout<<"YES";
   else cout<<"NO";
}

int main(){
  ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);

  int t=1;
//   cin>>t;
  for(int i=0;i<t;i++){
    //cout << fixed << setprecision(10);
    solve();
    cout<<endl;
  }
}