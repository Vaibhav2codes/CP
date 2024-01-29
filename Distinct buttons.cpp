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
        bool up=false;
        bool down=false;
        bool right=false;
        bool left=false;
    
    int i1,i2;
    for(int i=0;i<n;i++){
        cin>>i1;
        cin>>i2;
        if(i1>0){
            if(up==false)up=true;
        }
        else if(i1<0){
            if(down==false)down=true;
        }

        if(i2>0){
            if(right==false)right=true;
        }
        else if(i2<0){
            if(left==false)left=true;
        }

        
    }
    // cout<<up<<down<<right<<left<<endl;
    if(up==true && down==true && right==true && left==true){
            cout<<"NO"<<endl;
        }else cout<<"YES"<<endl;
    }
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin>>n;
//         int arr[n];
//         bool alleven=true,allodd=true;

//         for(int i=0;i<n;i++) {
//             cin>>arr[i];
//             if(arr[i]%2==0) allodd=false;
//             else alleven=false;
//         }
//         // if(alleven==false && allodd==false){
//         //     cout<<2<<endl;
//         //     continue;
//         // }
//     //     else if(alleven==true){
//     //         cout<<3<<endl;
//     //     }
//     //    else if(allodd==true){
//     //         cout<<4<<endl;
//     //     }

//        unordered_set<int>se1,se2,se3;
//        for(int i=0;i<n;i++){
//         se1.insert(arr[i]%3);
//         se2.insert(arr[i]%4);
//         se2.insert(arr[i]%2);
//        }
//        if(se1.size()==2) cout<<3<<endl;
//        else if(se2.size()==2) cout<<4<<endl;
//        else if(se3.size()==2) cout<<2<<endl;
//        else cout<<-1<<endl;
//     }
//     return 0;
// }