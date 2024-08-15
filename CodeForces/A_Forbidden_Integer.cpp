#include<bits/stdc++.h>
using namespace std;


#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define range(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define input(n, arr) for(int i = 0; i < (n); ++i) cin >> (arr)[i];

const int INF = 1<<29;
using ll= long long;


void solve(){

   int n,k,x,s=0,o=1;cin>>n>>k>>x;
   vector<int> ks;
   vector<int> os;

   while (s<n and o<=k and k>=1){
    if (o==x)o++;
    if (k==x) k--;
    if (s+k>n){
        if (s+o>n){
            if (ks.size()) ks.pop_back();
            s-=k;
            k--;
        }
        else{
            s+=o;
            os.push_back(o);
        }
        
        }
    else{
        s+=k;
        ks.push_back(k);
    }
   }
   if (s==n){ 
    cout<<"YES"<<"\n"<<ks.size()+os.size()<<"\n";
    for (auto i:ks) cout<<i<<" ";
    for (auto i:os) cout<<i<<" ";
    }
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