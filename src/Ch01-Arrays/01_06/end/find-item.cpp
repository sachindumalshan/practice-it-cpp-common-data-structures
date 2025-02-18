#include <iostream>
#include <string>
using namespace std;

template <typename T>
int findItem(const T arr[], size_t size, T target)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
        if (arr[i] == target){
            cout << "hi" << endl;
            return 1;}
    }
}

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    if (findItem(a, 10, 89))
        cout << "Target Found" << endl;
    else
        cout << "Target Not Found" << endl;

    char letter[8] = {'a', 'b', 'c', 'n', 'd', 'e', 'f', 'g'};
    if (findItem(letter, 8, 'i'))
        cout << "Target Found" << endl;
    else
        cout << "Target Not Found" << endl;

    return 0;
}
