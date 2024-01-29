#include <iostream>
#include <vector>

using namespace std;

void heapifyDown(vector<int>& heap, int index, int size) {
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;
    int smallest = index;

    if (leftChild < size && heap[leftChild] < heap[smallest]) {
        smallest = leftChild;
    }

    if (rightChild < size && heap[rightChild] < heap[smallest]) {
        smallest = rightChild;
    }

    if (smallest != index) {
        swap(heap[index], heap[smallest]);
        heapifyDown(heap, smallest, size);
    }
}

void deleteMin(vector<int>& heap, int& size) {
    if (size == 0) {
        cout << "Heap is empty!" << endl;
        return;
    }

    // Swap root with the last leaf
    swap(heap[0], heap[size - 1]);

    // Remove the last element
    size--;

    // Heapify down starting from the root
    heapifyDown(heap, 0, size);
}

int main() {
    int N;
    cin >> N;

    vector<int> heap(N);

    for (int i = 0; i < N; ++i) {
        cin >> heap[i];
    }

    for (int i = N; i > 0; --i) {
        // Perform deletion operation and print the updated heap
        deleteMin(heap, N);
        for (int j = 0; j < N; ++j) {
            cout << heap[j] << " ";
        }
        cout << endl;
    }

    return 0;
}
