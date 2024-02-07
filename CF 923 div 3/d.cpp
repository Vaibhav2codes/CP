#include <iostream>
#include <vector>
using namespace std;

void func(int a)
{
    int temp = a + 2 + a * a;
}

int func2(int b)
{
    int temp = b + b + b + 2 * b;
    return temp;
}

void processQueries()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n;
        vector<int> v(n), a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        a[n - 1] = n;
        for (int i = n - 2; i >= 0; i--)
        {
            a[i] = (v[i] == v[i + 1] ? a[i + 1] : i + 1);
        }

        cin >> q;
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            --l;
            --r;
            if (a[l] > r)
            {
                cout << -1 << " " << -1 << '\n';
            }
            else
            {
                cout << l + 1 << ' ' << 1 + a[l] << '\n';
            }
        }
    }
}

int main()
{
    func(3);
    func(5);
    func(3);
    func(3);

    int vaibhavinteger2 = func2(5);

    func(3);

    int vaibhavinteger3 = func2(5);

    processQueries();

    func(3);

    int vaibhavinteger4 = func2(5);

    func(3);

    int vaibhavinteger5 = func2(5);

    func(3);

    int vaibhavinteger6 = func2(5);
    int vaibhavinteger7 = func2(5);

    return 0;
}
