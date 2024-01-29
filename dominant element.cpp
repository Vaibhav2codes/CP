#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0){
        int n;
        cin>>n;
        unordered_map<int,int>mp;
        int temp;
        for(int i=0;i<n;i++){
            cin>>temp;
            mp[temp]++;
        }
        int max=begin(mp)->second;
        bool ans=true;
        mp.erase(begin(mp));
        for(auto v:mp){
            if(v.second>max){
                max=v.second;
                ans=true;
            }else if(v.second==max){
                ans=false;
            }
        }

        if(ans==true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        t--;
    }
    return 0;
}