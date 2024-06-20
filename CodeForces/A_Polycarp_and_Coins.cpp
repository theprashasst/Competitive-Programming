#include<bits/stdc++.h>
using namespace std;
using ll =long long;

void solve(){
    int n;cin>>n;
    double n3=n/3.0;
    ll fn3=floor(n3);
    if (n%3==0) cout<<fn3<<" "<<fn3;
    else if ((fn3+0.5)>n3) cout<<fn3+1<<" "<<fn3;
    else if ((fn3+0.5)<n3) cout<<fn3<<" "<<fn3+1;
   
}

int main(){
  ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);

  int t=1;
  cin>>t;
  for(int i=0;i<t;i++){
    solve();
    cout<<"\n";
  }
}