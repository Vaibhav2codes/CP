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
        int x;
        cin>>x;
        char temp;
        int start=0;
        bool flag=true;
        for(int i=0;i<n;i++){
            cin>>temp;
            if(start==0 && temp=='0'){
                flag=false;
            }else if(temp=='0'){
                start=start-1;
            }else if(temp=='1'){
                start=start+x;
            }
        }
        if(flag==false){
            cout<<"NO"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}