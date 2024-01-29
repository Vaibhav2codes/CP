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
        int maxi=0;
        int temp;
        for(int i=0;i<n;i++){
            cin>>temp;
            maxi=max(temp,maxi);
        }
        cout<<maxi<<endl;
    }
    return 0;
}