#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
   if (n==1) {cout<<1<<"\n";return;}
   for (int i=1; i<=n; i++) cout<<i<<" ";
   cout<<"\n";
   pattern(n-1);
   for (int i=1; i<=n; i++) cout<<i<<" ";
   cout<<"\n";
}
 
 int main(){
   pattern(9);
 }