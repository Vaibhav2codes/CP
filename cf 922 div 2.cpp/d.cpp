#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

// Function to find the maximum subarray sum using Kadane's algorithm
long long maxSubarraySum(const vector<int> &arr)
{
    long long maxEndingHere = 0, maxSoFar = 0;
    for (int x : arr)
    {
        maxEndingHere = max(0LL, maxEndingHere + x);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }
    return maxSoFar;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        // Calculate the maximum subarray sum
        long long maxSegmentSum = maxSubarraySum(a);

        // Calculate the prefix and suffix sums
        vector<long long> prefixSum(n + 1, 0), suffixSum(n + 2, 0);
        for (int i = 1; i <= n; ++i)
        {
            prefixSum[i] = prefixSum[i - 1] + a[i - 1];
        }
        for (int i = n; i >= 1; --i)
        {
            suffixSum[i] = suffixSum[i + 1] + a[i - 1];
        }

        // Calculate the maximum prefix and suffix sums
        long long maxPrefixSum = 0, maxSuffixSum = 0;
        for (int i = 1; i <= n; ++i)
        {
            maxPrefixSum = max(maxPrefixSum, prefixSum[i]);
            maxSuffixSum = max(maxSuffixSum, suffixSum[i]);
        }

        // The answer is the minimum between the maximum segment sum and the maximum of prefix and suffix sums
        cout << min(maxSegmentSum, max(maxPrefixSum, maxSuffixSum)) << '\n';
    }

    return 0;
}