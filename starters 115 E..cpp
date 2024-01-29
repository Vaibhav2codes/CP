#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int vaibhavfunc(int n){
        vector<int>vaibhav(n);
        int final=n,end=n+1;
        map<int,vector<int>>mapping;
        for(int i=0;i<n;i++){
            cin>>vaibhav[i];
            mapping[vaibhav[i]].push_back(i);
        }
        
        for(auto& [k,v] :mapping){
            int p=lower_bound(v.begin(),v.end(),end)-v.begin();
            if(p>0){
                p--;
                n-=p+1;
                final=min(final,n+k);
                end=v[0];
            }
        }
        return final;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<vaibhavfunc(n)<<endl;
    }
    return 0;
}