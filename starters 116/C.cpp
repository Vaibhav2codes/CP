#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>a(n);
        int temp;
        int maxi=0;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<m;i++){
            cin>>temp;
            if(temp>maxi){
                maxi=temp;
            }
        }
        // cout<<maxi<<" ";
        vector<int>ans;
        if(maxi>n){
            
        }else{for(int i=0;i<(n-maxi);i++){
            // cout<<a[i]<<endl;
            ans.push_back(a[i]);
        }
         a.erase(a.begin(), a.begin() + (n - maxi));
         sort(a.begin(),a.end());
        }
        for(int i=0;i<a.size();i++){
            ans.push_back(a[i]);
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}