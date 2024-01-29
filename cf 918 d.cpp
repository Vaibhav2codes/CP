#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        unordered_set<char> v = {'a', 'e'};
        unordered_set<char> c = {'b', 'c', 'd'};
        
        int n;
        cin >> n;
        
        string s;
        cin >> s;

        string ans = "";
        bool vowel = false;

        for (int i = 0; i < n; ++i) {
            char currentChar = s[i];

            if (v.count(currentChar) > 0) {
                ans += currentChar;
                vowel = true;

                if (i + 2 < n && v.count(s[i + 2]) > 0) {
                    vowel = false;
                    ans += '.';
                }
            } else {
                ans += currentChar;

                if (vowel) {
                    ans += '.';
                    vowel = false;
                }
            }
        }

        if (ans.back() == '.') {
            ans.pop_back();
        }

        cout << ans << endl;
    }

    return 0;
}
