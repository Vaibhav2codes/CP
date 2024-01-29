#include <iostream>
#include <vector>

int main() {
    int t;
    using namespace std; // using directive for std namespace

    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        // Vector to store 'a' numbers
        vector<int> numbers(a);

        // Input 'a' numbers
        for (int i = 0; i < a; i++) {
            cin >> numbers[i];
        }

        // Calculate the product of 'a' numbers
        int prod = 1;
        for (int i = 0; i < a; i++) {
            prod *= numbers[i];
        }

        // Check if the product is a divisor of 2023
        if (2023 % prod == 0) {
            // Output "YES" without std::
            cout << "YES" << endl;

            // Output the quotient and additional 1s without std::
            cout << 2023 / prod << " ";
            for (int i = 0; i < b - 1; i++) {
                cout << 1 << " ";
            }
            cout << endl;
        } else {
            // Output "NO" without std::
            cout << "NO" << endl;
        }
    }

    return 0;
}
