#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T!=0){
        int n;
        cin>>n;
        int temp;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>temp;
            mp[temp]++;
        }
        int max=mp.begin()->second;
        for(auto &it : mp){
            if(it.second>max){
                max=it.second;
            }
        }
        cout<<n-max<<endl;
        T--;
    }
    return 0;
}