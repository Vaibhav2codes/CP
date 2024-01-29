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
        int min=n%2+n/2;
        int max=n;

        cout<<min<<" "<<max<<endl;
        
    }
    return 0;
}