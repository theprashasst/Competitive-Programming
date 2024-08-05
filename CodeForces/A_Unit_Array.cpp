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
   int m=0,o=0;
   for( int i=0 ; i<n; i++){
    int x;cin>>x;
    if (x<0) m++;
    else o++;
   }
   int ans=0;
//    cout<<m<<" "<<o;
   if (m%2!=0){ m--;o++;ans+=1;}
   while (o+m*(-1)<0){
    if (m>=2) {m-=2; o+=2;ans+=2;}
    else break;
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