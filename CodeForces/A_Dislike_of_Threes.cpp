#include<bits/stdc++.h>
using namespace std;

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define range(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define input(n, arr) for(int i = 0; i < (n); ++i) cin >> (arr)[i];

const int INF = 1<<29;
typedef long long ll;

bool like(int num){
    bool end=true;
    int sum=0;
    while(num){
        int rem=num%10;
        if (end && rem==3) return false;
        end=false;
        sum+=rem;
        num/=10;
    }
    return sum%3!=0;
}


void solve(){

   int n;cin>>n;
   int i=1,kth=0;
   while(true){
    if(like(i)) kth++;
    if (kth==n) {cout<<i;break;}
    i++;
   }
   

}

int main(){
  ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);

  int t=1;
  cin>>t;
  for(int i=0;i<t;i++){
    solve();
    cout<<endl;
  }
}