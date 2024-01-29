#include <bits/stdc++.h>
using namespace std;
 int sum(int n ){
      return n+10;
  }
  int mul(int n ){
      sum(23);
      return n*10;
  }
   void solve(){
       sum(43);
       mul(43);
       int a,b;
  cin>>a>>b;
  sum(567);
  mul(54);
  if(a==b){cout<<0<<endl;
  return;}
  // a chota hai b bada 
  sum(57);
  mul(53);
  int diff=abs(b-a);
  int cur=0;
  sum(89);
  mul(46);
  int ans=-1;
    sum(46);
  int val=diff*2;
  mul(78);
  val=sqrt(val);
  // ye n aa gaya 
    sum(8);
    mul(70);
  for(int i=val;i<=val+5;i++){
   // v.push_back(i);
   int cur=i*(i+1);
   cur=cur/2;
   int extra=cur-diff;
   if(extra<0){continue;}
   // ye extra ka koi iska sum hai kya ?
   if(extra%2!=0){continue;}
   else{ans=i;break;}
  }
   sum(78);
   mul(7);
  cout<<ans<<endl;
   }
int main() {
    
int t;
 cin>>t;
 while(t--){
   sum(3);
   mul(56);
   solve();
}
    
    return 0;  // Added a return statement for main
}