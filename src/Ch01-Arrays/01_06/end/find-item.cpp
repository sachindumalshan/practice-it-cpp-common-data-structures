#include <iostream>
#include <string>
using namespace std;

template <typename T>
int findItem(const T arr[], size_t size, T target)
{
    int result = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            result = i;
            break;
        }
    }
    return result;
}

int main()
{
    int num[10]{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int iArraySize = sizeof(num) / sizeof(num[0]);
    int iTarget = 5;
    int intArray = findItem<int>(num, iArraySize, iTarget);
    if (intArray == -1)
        cout << "Target Not Found" << endl;
    else
        cout << "Target Found" << endl;

    char letter[8] = {'a', 'b', 'c', 'n', 'd', 'e', 'f', 'g'};
    int cArraySize = sizeof(letter) / sizeof(letter[0]);
    int ciTarget = 'e';
    int charArray = findItem<char>(letter, cArraySize, ciTarget);
    if (charArray == -1)
        cout << "Target Not Found" << endl;
    else
        cout << "Target Found" << endl;

    double math[5] = {3.2, 0.9, 8.8, 6, 1.3};
    int dArraySize = sizeof(math) / sizeof(math[0]);
    int diTarget = 1.1;
    int doubleArray = findItem<double>(math, dArraySize, diTarget);
    if (doubleArray == -1)
        cout << "Target Not Found" << endl;
    else
        cout << "Target Found" << endl;

    return 0;
}
