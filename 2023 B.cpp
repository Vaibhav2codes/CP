#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int a;
        long long int b;
        cin>>a>>b;
        long long int ans=(b%a!=0)?((a*b)/__gcd(a,b)):(b*(b/a));
        cout<<ans<<endl;
    }
     
    return 0;
}