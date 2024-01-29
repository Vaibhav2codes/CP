#include <bits/stdc++.h> 
using namespace std; 

#define int long long 
const int N = 1e6; 

int spf[N]; 
vector<int> primes; 

void sieve() { 
    spf[1] = 1; 
    for (int i = 2; i < N; i++) 
        spf[i] = i; 
    for (int i = 4; i < N; i += 2) 
        spf[i] = 2; 
    for (int i = 3; i * i < N; i++) { 
        if (spf[i] == i) { 
            for (int j = i * i; j < N; j += i) 
                if (spf[j] == j) 
                    spf[j] = i; 
        } 
    } 
} 

bool checkCongruence(vector<int>& a, int k, int m) { 
    int n = a.size(); 
    if (k == n) { 
        return true; 
    } 
    for (int i = 0; i < k; i++) { 
        int j = i; 
        while (j < n) { 
            if (a[j] % m != a[i] % m) { 
                return false; 
            } 
            j += k; 
        } 
    } 
    return true; 
} 

int findGCD(vector<int>& a, int k) { 
    int n = a.size(); 
    int gcd = 0; 
    for (int i = 0; i < k; i++) { 
        int mn = a[i], mx = a[i]; 
        int j = i; 
        while (j < n) { 
            mn = min(mn, a[j]); 
            mx = max(mx, a[j]); 
            j += k; 
        } 
        gcd = __gcd(gcd, mx - mn); 
    } 
    if (gcd == 0) { 
        return 1; 
    } 
    while (gcd > 1) { 
        int ss = spf[gcd]; 
        while (gcd % ss == 0) { 
            gcd /= ss; 
        } 
        if (checkCongruence(a, k, ss)) { 
            return 1; 
        } 
    } 
    return 0; 
} 

void vaibhavsolve() { 
    int n; 
    cin >> n; 
    vector<int> a(n); 
    for (int &x : a) { 
        cin >> x; 
    } 
    int ans = 0; 
    for (int i = 1; i * i <= n; i++) { 
        if (n % i == 0) { 
            ans += findGCD(a, i); 
            ans += findGCD(a, n / i); 
        } 
    } 
    int sq = sqrtl(n); 
    if (sq * sq == n) { 
        ans -= findGCD(a, sq); 
    } 
    cout << ans << endl; 
} 

signed main() { 
    int t; 
    cin >> t; 
    sieve(); 
    while (t--) { 
        vaibhavsolve(); 
    } 
    return 0; 
}
