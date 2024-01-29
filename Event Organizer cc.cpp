#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int func(int i,int j,vector<vector<int>>a,vector<vector<int>>dp){
    if(i==a.size()){
        return 0;
    }
    if(dp[i][j+1] != -1)return dp[i][j];
    
    int sum2=0+func(i+1,j,a,dp);

    int sum1=-1e8;
    if(i==0 || j==-1 || a[i][0]>=a[j][1]){
        sum1 = a[i][2]+func(i+1,i,a,dp);
    }
    

    return dp[i][j]=max(sum1,sum2);
}
int main()
{
    int t;
    cin>>t;
    while(t!=0){
        int n;
        cin>>n;
        
        vector<vector<int>>a;
        int at;
        for(int i=0;i<n;i++){
            vector<int>temp;
            for(int i=0;i<3;i++){
                  
        cin>>at;
        temp.push_back(at);
            }
            a.push_back(temp);
        }
        sort(a.begin(),a.end());
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        // cout<<dp[3][3];
        // cout<<a[0][0]<<a[1][0]<<a[2][0];
        int ans=func(0,-1,a,dp);
        cout<<ans<<endl;
        t--;
    }
    return 0;
}