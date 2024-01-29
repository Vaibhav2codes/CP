#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int f(int n,vector<vector<int>>v,vector<vector<int>>dp){
    // int n=v.size();

    for(int k=0;k<v.size();k++){{
        // dp[n-1][k]=v[n-1][k];
        cout<<v[n-1][k]<<" ";
    }
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            dp[i][j] = v[i][j] + max(dp[i + 1][j], dp[i + 1][j + 1]);
            // cout<<max(dp[i + 1][j] , dp[i + 1][j + 1])<<" ";
        }
    }
    return dp[0][0];
}}
int main()
{
    int test;
    cin>>test;
    while(test!=0){
        int n;
        cin>>n;
        vector<vector<int>>v;
        int temp;
        vector<int>t;
        // int count = 1;
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cin>>temp;
                t.push_back(temp);
            }
            v.push_back(t);
            t.clear();
            // count++;
        }
    //     for(int k=0;k<v.size();k++){
    //     // dp[n-1][k]=v[n-1][k];
    //     cout<<v[n-1][k]<<" ";
    // }
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        int ans=f(n,v,dp);
        // cout<<ans<<endl;
        test--;

    }
    return 0;
}