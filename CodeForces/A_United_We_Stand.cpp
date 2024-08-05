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
   vector<int> b;
   vector<int> c;
   for (int i=0; i<n; i++){
    int x;cin>>x;
    b.push_back(x);
   }
   sort(b.begin(),b.end());
   c.push_back(b.back());
   b.pop_back();
   while(b.back()==c.back()){
    c.push_back(b.back());
    b.pop_back();
   }

   
   if(b.size()==0 or c.size()==0)cout<<-1;
   else{
    cout<<b.size()<<" "<<c.size()<<"\n";
    for (auto i: b){
        cout<<i<<" ";
    }
    cout<<"\n";
    for (auto i: c){
        cout<<i<<" ";
    }
    // cout<<c.back();

   }


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