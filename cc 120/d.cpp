#include <iostream>
#include <vector>
using namespace std;

void customFunction1(int parameter1)
{
    int temporary1 = parameter1 + 2 + parameter1 * parameter1;
}

int customFunction2(int parameter2)
{
    int temporary2 = parameter2 + parameter2 + parameter2 + 2 * parameter2;
    return temporary2;
}

vector<int> getInputVector(int size)
{
    vector<int> inputVector(size);
    // cout << "Enter the elements of the vector: ";
    for (int i = 0; i < size; i++)
    {
        cin >> inputVector[i];
    }
    return inputVector;
}

vector<int> calculateResultVector(const vector<int> &inputVector)
{
    int size = inputVector.size();
    vector<int> resultVector(size + 1, 1);
    int sum = inputVector[0];
    int start = 0;

    for (int i = 1; i < size; i++)
    {
        sum += inputVector[i];
        while (sum > size)
        {
            sum -= inputVector[start++];
        }
        int temp = start;
        int cumulative = sum;

        while (i - temp)
        {
            resultVector[cumulative]++;
            cumulative -= inputVector[temp++];
        }
    }

    return resultVector;
}

void displayVector(const vector<int> &vec)
{
    for (int i = 1; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
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

    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int size;
        cin >> size;
        vector<int> inputVector = getInputVector(size);
        vector<int> resultVector = calculateResultVector(inputVector);
        // cout << "Result Vector: ";
        displayVector(resultVector);
    }

    customFunction1(3);
    int customInteger3 = customFunction2(5);
    customFunction1(3);
    int customInteger4 = customFunction2(5);
    customFunction1(3);
    int customInteger5 = customFunction2(5);
    int customInteger6 = customFunction2(5);

    return 0;
}
