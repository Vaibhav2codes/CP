#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void heapifyDown(vector<int>& heap, int index, int size) {
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;
    int largest = index;

    if (leftChild < size && heap[leftChild] > heap[largest]) {
        largest = leftChild;
    }

    if (rightChild < size && heap[rightChild] > heap[largest]) {
        largest = rightChild;
    }

    if (largest != index) {
        swap(heap[index], heap[largest]);
        heapifyDown(heap,(index-1)/2 , size);
    }
}
int main()
{
    int t;
    cin>>t;
    vector<int>arr(t);
    for(int i=0;i<t;i++){
        cin>>arr[i];
        // cout<<(i-1)/2<<endl;
        heapifyDown(arr,(i-1)/2,i+1);
    }
     
    // for(int i=(t-2/2);i>=0;i--){
    //     heapifyDown(arr,t,i);
    // }

    for(int i=t-1;i>0;i--){
        swap(arr[0],arr[i]);
        heapifyDown(arr,0,i);
    }

    for(int i=0;i<t;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}