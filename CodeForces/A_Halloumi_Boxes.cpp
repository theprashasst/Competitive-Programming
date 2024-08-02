#include<bits/stdc++.h>
using namespace std;


#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define range(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define input(n, arr) for(int i = 0; i < (n); ++i) cin >> (arr)[i];

const int INF = 1<<29;
using ll= long long;


void solve(){

   int n,k;cin>>n>>k;

   int last=0;
   int dec=0;
   for (int i=0;i<n;i++){
     int curr;cin>>curr;
     if (curr<last) dec++;
     last=curr;
   }
   if ((k>1) or (n==1)) {
    cout<<"YES";
   }
   else if (dec==0) cout<<"YES";
   else cout<<"NO";
   

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