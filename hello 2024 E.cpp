#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 998244353;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        // Count occurrences of each value in the prefix sum array
        vector<int> count(2 * n + 1, 0);
        for (int i = 0; i < n; i++) {
            count[p[i] + n]++;
        }

        int result = 1;
        for (int i = 0; i < n; i++) {
            int current = p[i] + n;
            if (count[current] > 0) {
                count[current]--;
            } else {
                // No valid array for the current starting value
                result = 0;
                break;
            }

            for (int j = i + 1; j < n; j++) {
                current += p[j];
                if (count[current] > 0) {
                    count[current]--;
                } else {
                    // No valid array for the current starting value
                    result = 0;
                    break;
                }
            }

            if (result == 0) {
                break;
            }
        }

        cout << result << endl;
    }

    return 0;
}
