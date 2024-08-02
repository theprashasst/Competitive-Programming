#include<bits/stdc++.h>
using namespace std;


#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define range(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define input(n, arr) for(int i = 0; i < (n); ++i) cin >> (arr)[i];

const int INF = 1<<29;
using ll= long long;


void solve(){

//    int n;cin>>n;
   int ans=0;
   for (int i=1; i<=10;i++){
    for (int j=1; j<=10; j++){
        char x;cin>>x;
        // cout<<x;
        if (x=='X'){
            int score=0;
            if (j>=i and j<=10-i) ans+=i%6;
            // ans+=min(i%6,j%6);
        }
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