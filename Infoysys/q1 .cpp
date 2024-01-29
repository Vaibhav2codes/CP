#include<iostream>
#include<map>



using namespace std;
int main(){
int nMon,nExp;
cin>>nMon;
cin>>nExp;
map<int,int> monster;
int arr[nMon],monBon;
for(int i=0; i<nMon; i++){ cin>>arr[i];
}
for(int i=0; i<nMon; i++){ cin>>monBon;
    monster[arr[i]]=monBon;
}

map<int,int> :: iterator iter;

int value,valBon,counter=0;;

for(iter=monster.begin(); iter!= monster.end(); iter++){

    value=(*iter).first;

    valBon=(*iter).second;

     if(nExp>=value){

        nExp=nExp+valBon;

        counter++;

     }else{

        break;

     }

}

cout<<counter<<endl;

}