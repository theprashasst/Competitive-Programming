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

   if (n<10) {cout<<n;return;}
   else if (n<10e1) {cout<<9+(n%(10));return;}
   else if (n<10e2) {cout<<18+(n%(100));return;}
   else if (n<10e3) {cout<<27+(n%(1000));return;}
   else if (n<10e4) {cout<<36+(n%(10000));return;}
   else if (n<10e5) {cout<<45+(n%(100000));return;}
   else if (n<10e6) {cout<<56+(n%(1000000));return;}
   else if (n<10e7) {cout<<63+(n%(10000000));return;}
   else {cout<<81;return;}


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