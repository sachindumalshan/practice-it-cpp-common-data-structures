#include <iostream>
#include <string>
using namespace std;

template <typename T>
int findItem(const T arr[], size_t size, T target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    if (findItem<int>(a, 10, 5))
        cout << "Target Found" << endl;
    else
        cout << "Target Not Found" << endl;

    char letter[8] = {'a', 'b', 'c', 'n', 'd', 'e', 'f', 'g'};
    if (findItem<char>(letter, 8, 'e'))
        cout << "Target Found" << endl;
    else
        cout << "Target Not Found" << endl;

    double math[5] = {3.2,0.9,8.8,6,1.3};
    if (findItem<double>(math, 5, 8.6))
        cout << "Target Found" << endl;
    else
        cout << "Target Not Found" << endl;

    return 0;
}
