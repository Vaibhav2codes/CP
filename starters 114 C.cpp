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
        vector<int>arr;
        int temp;
        for(int i=0;i<n;i++){
            cin>>temp;
            arr.push_back(temp);
        }
        int max=arr[0];
        int ans=0;
        for(int i=1;i<n;i++){
            if(arr[i]<max){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}