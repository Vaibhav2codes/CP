#include <iostream>
#include <vector>
#include <unordered_set>
#define int long long int
using namespace std;

bool checkEqualSums(const vector<int>& numbers) {
    unordered_set<int> uniqueSums;
    uniqueSums.insert(0);

    int currentSum = 0;

    for (int idx = 0; idx < numbers.size(); idx++) {
        currentSum += (idx % 2 == 0) ? -numbers[idx] : numbers[idx];

        if (uniqueSums.count(currentSum)) {
            return true;
        }

        uniqueSums.insert(currentSum);
    }

    return false;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        int arraySize;
        cin >> arraySize;

        vector<int> elements(arraySize);

        for (int i = 0; i < arraySize; i++) {
            cin >> elements[i];
        }

        bool hasEqualSums = checkEqualSums(elements);

        cout << ((hasEqualSums) ? "YES" : "NO") << endl;
    }

    return 0;
}
