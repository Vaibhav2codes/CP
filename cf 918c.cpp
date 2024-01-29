#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool checksquarevaibhav(long long int x)
{
    
    if (x >= 0) {

        long long int sr = sqrt(x);
        
        return (sr * sr == x);
    }
    
    return false;
}


int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int sum=0;
        long long int n;
        cin>>n;
        
        for (int i = 0; i <n; i++) {
            long long int temp;
            cin>>temp;
            sum=sum+temp;
    }
    if(checksquarevaibhav(sum)==true){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    }
    return 0;
}
