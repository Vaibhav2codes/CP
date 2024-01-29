#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n;
        long long int x;
        long long int y;
        cin>>n;
        cin>>x;
        cin>>y;
        if(x<n){
            cout<<"NO"<<endl;
            continue;
        }
        if((x/2)>=n){
            cout<<"YES"<<endl;
            continue;
        }
        long long int a=y/3;
        long long int b=0;

        if(a>x){
            a=x;
        }else{
            b=(x-a)/2;
        }

        if(a+b>=n){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

        // cout<<"NO"<<endl;

    }
    return 0;
}   