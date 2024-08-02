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
   vector<int> arr(n,0);
   map<int,int> mp;
   for (int i=0;i<n;i++){
    cin>>arr[i];
   }
   for (auto i :arr){
   mp[i]++;
   }
   int s=mp.size();
   if (s>2){ cout<<"No"; return;}
   if (s==1){ cout<<"Yes";return;}
   int a=0,b=0;
   for (auto i:mp){
    if (a==0) a=i.second;
    else b=i.second;
   }
   if ((a==b) or (abs(a-b)==1)) cout<<"Yes";
   else cout<<"No";

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