#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <queue>
#include <stack>
#include <cmath>
#include <iomanip>
#include <bitset>
#include <cctype>
#include <cassert>
#include <deque>
#include <set>
#include <sstream>
#include <functional>
#include <iterator>
#include <numeric>
#include <random>
#include <regex>
#include <stdexcept>
#include <tuple>
#include <utility>
#include <variant>
#include <fstream>
#include <thread>
#include <chrono>
#include <ctime>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()
#include <cmath>    // for sqrt() and pow()
using namespace std;

#define int long long int

int calculateSum(const vector<int>& a, int x) {
    int n = a.size();
    int sum = 0;
    int index = n - x;

    for (int i = 0; i < n; i++) {
        if (i < index) sum += a[i];
        else sum -= a[i];
    }

    return sum;
}

int vaibhavsolve(const vector<int>& a, int k, int x) {
    int n = a.size();
    int sum = calculateSum(a, x);
    int ans = sum;

    for (int i = n - 1; i >= n - k; i--) {
        int index = i - x + 1;

        if (i >= index) {
            sum += a[i];
            if (index - 1 >= 0) sum -= 2 * a[index - 1];
            ans = max(ans, sum);
        }
    }

    return ans;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        cout << vaibhavsolve(arr, k, x) << endl;
    }

    return 0;
}
