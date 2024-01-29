#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>pq;
    int n;
    cin>>n;
    char s;
    char q;
    
    for(int i=0;i<n;i++){
        cin>>s;
        cin>>q;
        // cout<<s<<q<<endl;
        if(s=='+'){
            pq.push(q-'0');
        }else if(s=='-'){
            pq.pop();
        }
        cout<<pq.top()<<endl;
    }

    return 0;
}