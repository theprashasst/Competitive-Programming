#include<bits/stdc++.h>
using namespace std;

#define set(type, name) unordered_set<type> name;
#define in(element, container) ((container).find(element) != (container).end())

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define range(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define input(n, arr) for(int i = 0; i < (n); ++i) cin >> (arr)[i];

const int INF = 1<<29;
using ll= long long;
using ld = long double;


void solve(){

   int n;cin>>n;
   vector<int> arr(n);
   for (int i=0; i<n; i++){cin>>arr[i];}
   int maxx=arr[0];
   ll avg=0;
   
   for (int i=0; i<n; i++){
    if(arr[i]>maxx) maxx=arr[i];
    avg+=arr[i];
   }
   cout<< 1.0* (avg -maxx)/ (n-1) +maxx;
}
int main(){
  ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);

  int t=1;
  cin>>t;
  for(int i=0;i<t;i++){
    cout << fixed << setprecision(10);
    solve();
    cout<<endl;
  }
}