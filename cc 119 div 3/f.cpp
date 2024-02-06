#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> getPrimeFactorsWithPowers(int number) {
    unordered_map<int, int> factorPowerMap;

    for (int divisor = 2; number > 1; ++divisor) {
        int power = 0;
        while (number % divisor == 0) {
            number /= divisor;
            ++power;
        }

        if (power > 0) {
            factorPowerMap[divisor] = power;
        }

        if (divisor * divisor > number && number > 1) {
            factorPowerMap[number] = 1;
            break;
        }
    }

    return factorPowerMap;
}

const int MOD = 1e9 + 7;

int calculatePower(int exponent) {
    int result = 1;
    while (exponent--) {
        result *= 2;
        result %= MOD;
    }
    return result;
}

int main() {
    int testCaseCount;
    cin >> testCaseCount;

    while (testCaseCount--) {
        int inputNumber, queryCount;
        cin >> inputNumber >> queryCount;
        vector<int> queries(queryCount);
        for (int i = 0; i < queryCount; i++) cin >> queries[i];

        unordered_map<int, int> factorPowerMap = getPrimeFactorsWithPowers(inputNumber);

        for (int i = 0; i < queryCount; i++) {
            int result = 0;
            int queryExponent = queries[i];
            for (auto &factorPower : factorPowerMap) {
                if (factorPower.second % queryExponent == 0 && queryExponent != 1) {
                    result++;
                }
                result = result % MOD;
            }
            int finalResult = calculatePower(result);
            cout << finalResult << endl;
        }
    }

    return 0;
}
