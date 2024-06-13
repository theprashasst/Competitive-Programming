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
   int rooks;cin>>rooks;
   int rl=1,cl=1;
   int deployed=1;

   for (int r=1; r<=n; r++){
    for( int c=1; c<=n; c++){
        if (deployed==rooks) break;
        else if (r-rl==2 and c-cl==2 ) {
            deployed++;
            rl=r;
            cl=c;
        }
    }
   }

//    for (int d=1; d<=n ;d+=2) deployed++;

   


   
//    DEBUG(deployed) DEBUG(rooks)
   if (deployed<rooks) {cout<<-1; return;}
   rl=1; cl=1; deployed=1;


   for (int r=1; r<=n; r++){
    for( int c=1; c<=n; c++){
        if(r==1 and c==1) cout<<'R';
        else if (deployed<rooks and r-rl==2 and c-cl==2 ) {
            deployed++;
            cout<<'R';
            rl=r;
            cl=c;
        }
        else cout<<'.';
    }
    cout<<"\n";
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