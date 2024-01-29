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
        vector<int>a(n);
        vector<int>b(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int>());
        int test=a[0]+b[0];
        bool flag=true;
        for(int i=1;i<n;i++){
            if(test!=a[i]+b[i]){
                flag=false;
                break;
            }
        }
        if(flag==false){
            cout<<-1<<endl;
        }else{
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
            for(int i=0;i<n;i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}