#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// Vaibhav Singh
// vaibhav02codes
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string temp;
        for(int i=0;i<n;i++){
            temp+='P';
        }
        int wins=(n+2)/2;
        for(int i=0;i<n;i++){
            if(s[i]=='R'){
                wins--;
            }
        }
        if(wins==0){
            for(auto x:temp){
                cout<<x;
            }
            cout<<endl;
            continue;
        }
        int j=n-1;
        while(wins>0){
            if(s[j]=='P'){
                temp[j]='S';
                wins--;
            }
            if(s[j]=='S'){
                temp[j]='R';
                wins--;
            }
            j--;
        }
        for(auto x:temp){
                cout<<x;
            }
        cout<<endl;

    }
    return 0;
}