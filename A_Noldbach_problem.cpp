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
   int cnt=0;
   vector<int> prime;
   int arr[n+1];
   fill(arr,arr+n+1,0);
   arr[0]=arr[1]=1;

   for  (int i=2; i<=n; i++){
    if (!arr[i]){
        for (int j=i*i ; j<=n; j+=i){
            arr[j]=1;
        }
    }
   }
   for (int i=3; i<=n; i++){
    if (arr[i]>0) prime.push_back(i);
   }

   for (int i=2; i<=n-1; i++){
    if (prime[i]+prime[i+1]+1<=n) cnt++;
   }

   if (cnt>=k) cout<<"YES";
   else cout<<"NOo";

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