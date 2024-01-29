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
        int s=0;
        char c=0;
        for(int i=0;i<n;i++){
            cin>>c;
            if(c=='+'){
                s++;
            }else{
                s--;
            }
        }
        cout<<abs(s)<<endl;
    }
    return 0;
}