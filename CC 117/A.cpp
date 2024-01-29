#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;

        for(int i=0;i<n-1;i++){
            if(s[i]>s[i+1]){
                s.erase(i,1);
                break;
            }
        }
        if(s.length()==n){
            s.erase(n-1,1);
            cout<<s<<endl;
        }else cout<<s<<endl;
    }
    return 0;
}   