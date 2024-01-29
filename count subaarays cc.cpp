#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0){
        long n;
	    cin>>n;
	    long arr[n+1];
	    for (long i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    arr[n]=0;
	    long ans=0;
	    long count=1;
	    for(long i=1;i<=n;i++){
	        if (arr[i]>=arr[i-1]){
	            count++;
	        }
	        else{
	            ans+=(count*(count+1))/2;
	            count=1;
	        }
	    }
	    cout<<ans<<endl;
        t--;
    }
    return 0;
}