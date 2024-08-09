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
   int two=0;
   for( int i=0; i<n; i++){
    cin>>arr[i];
    if (arr[i]==2) two++;
    }
    if (two%2!=0) {cout<<-1;return;}

    int half=two/2;
    for (int i=0; i<n; i++){
      if (arr[i]==2) two--;
      if (two==half){ cout<<i+1;return;}
    }
    cout<<-1;

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