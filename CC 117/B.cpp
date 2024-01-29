// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool isPrime(int n)
// {
//     // Corner case
//     if (n <= 1)
//         return false;
 
//     // Check from 2 to n-1
//     for (int i = 2; i <= n / 2; i++)
//         if (n % i == 0)
//             return false;
 
//     return true;
// }
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
        // if(n<=2){
        //     cout<<-1<<endl;
        //     continue;
        // }
//         vector<int>p(n,0);
//         vector<int>even;
//         vector<int>odd;
//         for(int i=0;i<n;i++){
//             cin>>p[i];
//             if((i+1)%2==0){
//                 even.push_back(p[i]);
//             }else{
//                 odd.push_back(p[i]);
//             }
//         }
//         sort(even.begin(),even.end(),greater<int>());
//         sort(odd.begin(),odd.end(),greater<int>());
//         vector<int>ans;
//         int e=0;
//         int o=0;
//         for(int i=0;i<n;i++){
//             if(p[i]%2==0){
//                 ans.push_back(even[i]);
//             }else{
//                 ans.push
//             }
//         }
//     }
//     return 0;
// }
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
        vector<int>p(n,0);
        vector<int>ans;
        
        for(int i=0;i<n;i++){
            cin>>p[i];
            if(p[i]==1){
                ans.push_back(3);
            }else if(p[i]==3){
                ans.push_back(1);
            }else{
                ans.push_back(p[i]);
            }
        }

        if(n<=2){
            cout<<-1<<endl;
            continue;
        }

        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        
        
        
        
        
    }
    return 0;
}