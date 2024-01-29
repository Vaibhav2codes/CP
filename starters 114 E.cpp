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
        
        // totalodds=(pow(n,n)+1)/2;

        
        if(n%2==0){
            cout<<-1<<endl;
            continue;
        }else{
            vector<int>o;
            vector<int>e;
            for(int i=1;i<=n*n;i++){
            // cout<<i<<" ";
            if(i%2==0){
                e.push_back(i);
            }else{
                o.push_back(i);
            }
        }
            // cout<<endl;
            vector<vector<int>>ans(n,vector<int>(n,0));
            int m=0;
            int k=0;
            for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i==0 || j==0){
                ans[i][j]=o[m];
                m++;
            }else if(m<o.size() && i==n-1){
                ans[i][j]=o[m];
                m++;
            }else{
                ans[i][j]=e[k];
                k++;
            }
        }
    }
         for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
        }

    }
    return 0;
}