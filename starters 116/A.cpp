#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int count=0;
        char temp;
        bool flag=false;
        for(int i=0;i<6;i++){
            cin>>temp;
            // cout<<temp<<" "<<i<<" ";
            if(temp=='W'){
                count++;
                // cout<<count<<endl;
                
            }else{
                count=0;
            }
            if(count==3){
                    flag=true;
                }
        }
        // cout<<flag<<" ";
        if(flag==false)cout<<"No"<<endl;
        else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}