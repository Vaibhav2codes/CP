#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    long long ans;
    ans= sqrtl(n);
    if(n%2==1){
        ans++;
    }
    cout<<ans/2<<endl;
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
    solve();
    }
    return 0;
}