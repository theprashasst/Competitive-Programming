#include<bits/stdc++.h>
using namespace std;


#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define range(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define input(n, arr) for(int i = 0; i < (n); ++i) cin >> (arr)[i];

const int INF = 1<<29;
using ll= long long;


void solve(){

   int x,k;cin>>x>>k;
   int curr=x,s=0,o=1;
   vector<int> currs;
   vector<int> os;
   while (x>0 and s<x){
    if (curr%k==0) curr--;
    if (o%k==0) o++;
    if (s+curr>x){
        if (s+o>x){
            if (currs.size())currs.pop_back();
            s-=curr;
            curr--;
        }
        else{
            s+=o;
            os.push_back(o);
        }
        
    }
    else{
        s+=curr;
        currs.push_back(curr);

    }
   }
   o=-1;
    while (x<0 and s>x){
    if (abs(curr)%k==0) curr++;
    if (abs(o)%k==0) o--;
    if (s+curr<x){
        if (s+o<x){
            if (currs.size())currs.pop_back();
            s-=curr;
            curr++;
        }
        else{
            s+=o;
            os.push_back(o);
        }
        
    }
    else{
        s+=curr;
        currs.push_back(curr);

    }
    }

    

   cout<<currs.size()+os.size()<<"\n";
   for (auto i:currs) cout<<i<<" ";
   for (auto i:os) cout<<i<<" ";

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