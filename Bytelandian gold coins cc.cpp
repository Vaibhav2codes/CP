#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        for(int i=2;i<5;i++){
            sum+=n/i;
        }
        if(sum>=n){
            cout<<sum<<endl;
        }else{
            cout<<n<<endl;
        }
    }
    return 0;
}