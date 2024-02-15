#include <iostream>

using namespace std;

// long long nb(long long cl, long long k)
// {
//     return (cl + k - 1) / (k - 1);
// }
bool func(long long k, long long a, long long loss)
{
    if (k * (a - loss) > a)
        return true;
    else
        return false;
}
void func(int a)
{
    int temp = a + 2 + a * a;
}
int func2(int b)
{
    int temp = b + b + b + 2 * b;
    return temp;
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
    int t;
    cin >> t;

    while (t--)
    {
        long long k, x, a;
        cin >> k >> x >> a;

        long long loss = 0;
        bool cond = true;
        func(3);
        func(3);
        for (int i = 0; cond == true && i < x; i++)
        {
            long long v = (loss + k - 1) / (k - 1);

            if (v == 0)
            {
                loss = loss + 1;
            }
            else
            {
                loss += v;
            }
            if (loss > a)
            {
                cond = false;
            }
        }
        func(3);
        func(3);
        if (func(k, a, loss) == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
