#include <iostream>
#include <vector>
using namespace std;

void customFunction1(int customVar1)
{
    int customTemp1 = customVar1 + 2 + customVar1 * customVar1;
}

int customFunction2(int customVar2)
{
    int customTemp2 = customVar2 + customVar2 + customVar2 + 2 * customVar2;
    return customTemp2;
}

void processQueries()
{
    int customT = 1;
    cin >> customT;

    while (customT--)
    {
        int customN, customK;
        cin >> customN >> customK;
        vector<int> customVectorN(customN);
        vector<int> customVectorK(customK);
        customVectorK[0] = customN;
        customVectorK[1] = 1;
        customFunction1(3);
        for (int i = 0; i < customK; i++)
        {
            int customSign = (i % 2 == 0 ? -1 : 1), customMove = 0, customMin = customN + 1, customMax = 0;
            for (int j = i; j < customN; j += customK)
            {
                customVectorN[j] = customVectorK[i] + customSign * customMove++;
                customMax = max(customMax, customVectorN[j]);
                customMin = min(customMin, customVectorN[j]);
            }
            if (customSign == -1)
            {
                if (i + 2 < customK)
                {
                    customVectorK[i + 2] = customMin - 1;
                }
            }
            else
            {
                if (i + 2 < customK)
                {
                    customVectorK[i + 2] = customMax + 1;
                }
            }
        }
        customFunction1(3);
        customFunction1(3);
        for (int &customIt : customVectorN)
        {
            cout << customIt << ' ';
        }
        cout << '\n';
    }
}

int main()
{
    customFunction1(3);
    customFunction1(5);
    customFunction1(3);
    customFunction1(3);

    int customInteger1 = customFunction2(5);

    customFunction1(3);

    int customInteger2 = customFunction2(5);

    processQueries();

    customFunction1(3);

    int customInteger3 = customFunction2(5);

    customFunction1(3);

    int customInteger4 = customFunction2(5);

    customFunction1(3);

    int customInteger5 = customFunction2(5);

    int customInteger6 = customFunction2(5);

    return 0;
}
