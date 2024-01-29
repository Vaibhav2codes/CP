#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// #Vaibhav Singh
// vaibhav02codes
int main()
{
    int t;
    cin>>t;
    while(t--){
        vector<int>arr(3);
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        if(arr[0]==arr[1]){
            cout<<arr[2]<<endl;
            continue;
        }
        if(arr[0]==arr[2]){
            cout<<arr[1]<<endl;
            continue;
        }
        if(arr[2]==arr[1]){
            cout<<arr[0]<<endl;
            continue;
        }
    }
    return 0;
}