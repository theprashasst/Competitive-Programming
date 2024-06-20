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
   int sl,gl,maxx=-1,small=n+1, ans;
   for (int i=1 ; i<=n; i++){
    int x;cin>>x;
    if (x>maxx){
        maxx=x;
        gl=i;
    }
    if (x<small){
        small=x;
        sl=i;
    }
   }
   if (sl<=n/2 and gl<=n/2) ans= max(sl,gl);
   else if (sl>n/2 and gl>n/2) ans= max(n-sl+1,n-gl+1);
   else{
    ans=min(gl,n-gl+1)+min(sl,n-sl+1);
    int ansl=max(sl,gl);
    int ansr=max(n-sl+1,n-gl+1);
    int ans2= min(ansl,ansr);
    ans=min(ans,ans2);
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