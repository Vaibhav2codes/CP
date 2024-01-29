#include <bits/stdc++.h>
using namespace std;

int main() {
 // your code goes here
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,x,z;
        cin>>n>>x>>z;
        
        int arr[n];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];
        
        long long int sum = 0;
        
        for(int i=0;i<n;i++)
        {
            sum += arr[i];
        }
        
        
        vector<int>v;
        
        for(int i=1;i<=sum;i++)
        {
            int a = x*i;
            v.push_back(a);
        }
        bool flag = false;
        int ans = -1;
        for(int i=0;i<sum;i++)
        {
            if(v[i]>=z)
           {
            int s=0,e=sum;
            
            while(s<=e)
            {
                int m = s+(e-s)/2;
                
                if((v[i]-m)==z)
                {
                    ans = i + 1;
                    flag = true;
                    break;
                }
                else if((v[i]-m)<z)
                {
                    e = m - 1;
                }
                else
                {
                    s = m + 1;
                }
            }
          }
            if(flag == true)
            break;
        }
        
       cout<<ans<<endl;
    }
}