#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x;
        cin>>y;
        cin>>z;

        int area=x*y;
        int totalcost=area*2;
        int ans=int(z/totalcost);
        cout<<ans<<endl;
    }
    return 0;
}