#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        int count=0;
        for(int i=0;i<5;i++){
            cin>>n;
            if(n==1){
                count++;
            }
        }
        
        if(count>=4){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
