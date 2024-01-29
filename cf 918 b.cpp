#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        char x,y,z;

        for(int i=0;i<3;i++){
            bool a=false;
            bool b=false;
            bool c=false;
            cin>>x;
            cin>>y;
            cin>>z;
            if(x=='?'){
                if(y=='A' || z=='A'){
                    a=true;
                }
                if(y=='B' || z=='B'){
                    b=true;
                }
                if(y=='C' || z=='C'){
                    c=true;
                }
            }
            else if(y=='?'){
                if(x=='A' || z=='A'){
                    a=true;
                }
                if(x=='B' || z=='B'){
                    b=true;
                }
                if(x=='C' || z=='C'){
                    c=true;
                }
            }
            else if(z=='?'){
                if(y=='A' || x=='A'){
                    a=true;
                }
                if(y=='B' || x=='B'){
                    b=true;
                }
                if(y=='C' || x=='C'){
                    c=true;
                }
            }else{
                a=true;
                b=true;
                c=true;

            }
            if(a == false){
                
                cout<<'A'<<endl;
            }
            if(b == false){
                cout<<'B'<<endl;
            }
            if(c == false){
                cout<<'C'<<endl;
            }
        }
    }
    return 0;
}