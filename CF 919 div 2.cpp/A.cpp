// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         long long int min=0;
//         unordered_set<long long int>s;
//         long long int max=1e9;
//         for(int i=0;i<n;i++){
//             int a,x;
//             cin>>a>>x;

//             if(a==1){
//                 if(x>min){
//                     min=x;
//                 }
//             }
//             if(a==2){
//                 if(x<max){
//                     max=x;
//                 }
//             }
//             if(a==3){
//                 s.insert(x);
//             }
//         }
//         long long int ans=0;

//         for(long long int i=min;i<=max;i++){
//             if(s.find(i)==s.end()){
//                 ans++;
//             }
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }
#include <iostream>
#include <unordered_set>
#include <limits>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        long long int min_val = numeric_limits<long long int>::min();
        long long int max_val = numeric_limits<long long int>::max();
        unordered_set<long long int> s;

        for (int i = 0; i < n; i++)
        {
            int a, x;
            cin >> a >> x;

            if (a == 1)
            {
                if (x > min_val)
                {
                    min_val = x;
                }
            }
            else if (a == 2)
            {
                if (x < max_val)
                {
                    max_val = x;
                }
            }
            else if (a == 3)
            {
                s.insert(x);
            }
        }
        long long int ans=0;
        if(max_val>=min_val)ans = max_val-min_val +1;

        for(auto it : s){
            if(it>=min_val && it<=max_val){
                ans--;
            }
        }
        if(ans>0)
        cout << ans << endl;
        else cout<<0<<endl;
    }
    return 0;
}
