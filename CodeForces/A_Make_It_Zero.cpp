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
   for (int i=0; i<n ; i++) cin>>arr[i];
  //  int xo=arr[0];
  //  for (int i=1; i<n; i++) xo^=arr[i] ;
  //  if (xo==0){
  //   cout<<1<<"\n";
  //   cout<<1<<" "<<n;
  //  }
  //  else {
  if (n&1){
    cout << "4" << '\n';
		cout << "1 " << n - 1 << '\n';
		cout << "1 " << n - 1 << '\n';
		cout << n - 1 << ' ' << n << '\n';
		cout << n - 1 << ' ' << n << '\n';
  }
  else{
    cout<<2<<"\n";
    cout<<1<<" "<<n<<"\n";
    cout<<1<<" "<<n;

  }
    
  //   for(int i=0; i<n ; i++) cout<<0<<" ";

  //  }

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