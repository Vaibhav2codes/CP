#include <iostream>
#include<bits/stdc++.h>

// #vaibhav
// #vaibhav02codes
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        bool isZero=false;
        bool isPos=true;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0){
                isZero = true;
            }
            if(arr[i]<0){
                if(isPos==true){
                    isPos=false;
                }else{
                    isPos=true;
                }
            }
        }
        if(isZero==true){
            cout<<"0"<<endl;
            continue;
        }
        if(isPos){
            cout<<"1"<<endl;
            cout<<"1"<<" "<<"0"<<endl;
            continue;
        }
        cout<<"0"<<endl;
        // cout<<"0"<<endl;
    }
    return 0;
}