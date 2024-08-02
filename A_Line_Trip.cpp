#include<bits/stdc++.h>
using namespace std;


#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define range(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define input(n, arr) for(int i = 0; i < (n); ++i) cin >> (arr)[i];

const int INF = 1<<29;
using ll= long long;


void solve(){

   int n,x;cin>>n>>x;
   vector<int> arr(n,0);
   for (int i=0; i<n; i++){
    cin>>arr[i];
   }
   if (size(arr)==1){ 
    cout<< max(arr[0],2*(x-arr[0]));
    return;
    }
   int maxd=arr[0];
   int i=1;
   int last;
   while (i<n){
    maxd=max(maxd,arr[i]-arr[i-1]);
    if (i==n-1) last=arr[i];
    i++;
   }
   maxd=max(maxd,2*(x-last));
   cout<<maxd;
   

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