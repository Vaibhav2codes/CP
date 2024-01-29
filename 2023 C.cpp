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
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<long long int>ans(n);
        long long int total=v[0];
        ans[0]=v[0];
        for(long long int i=1;i<n;i++){
            total+=v[i];

            if(total%2!=0){
                ans[i]=total-1;
            }else{
                ans[i]=total;
            }
        }

        for(int i=0;i<n-1;i++){
            if(ans[i]==ans[i+1]){
                ans[i]=ans[i]-2;
            }
        }

        for(auto x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}