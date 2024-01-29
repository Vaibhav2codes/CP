#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void minHeapify(vector<int>&arr,int& i){
    int parentIndex=(i-1)/2;

    if(arr[parentIndex]>arr[i]){
        swap(arr[i],arr[parentIndex]);
        minHeapify(arr,parentIndex);
    }

    
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    int temp;
    for (int i = 0; i < n; i++) {
        cin>>temp;
        arr.push_back(temp);
        minHeapify(arr,i);
    for(int j=0;j<arr.size();j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    }
    
    return 0;
}