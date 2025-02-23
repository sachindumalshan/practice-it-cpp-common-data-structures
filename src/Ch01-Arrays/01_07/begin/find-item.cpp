#include <iostream>
#include <string>
using namespace std;

template <typename T>
int findItem(const T arr[], size_t size, T target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main()
{
    int num[]{1, 2, 3, 4, 5, 6, 7};
    size_t inum = sizeof(num) / sizeof(num[0]);
    int itarget = 9;
    int ioutput = findItem(num, inum, itarget);
    if (ioutput != -1)
        cout << "The item " << itarget << " found at position : " << ioutput << endl;
    else
        cout << "The item '" << itarget << "' not found from the array." << endl;

    
    char letter[]{'A', 'B', 'C', 'D', 'E', 'F'};
    size_t cletter = sizeof(letter) / sizeof(letter[0]);
    char ctarget = 'B';
    int coutput = findItem(letter, cletter, ctarget);
    if (coutput != -1)
        cout << "The item " << ctarget << " found at position : " << coutput << endl;
    else
        cout << "The item '" << ctarget << "' not found from the array." << endl;


    string word[]{"Hi","ABC","Sachindu","Malshan","Hello"};
    size_t sword = sizeof(word) / sizeof(word[0]);
    string starget = "Hello";
    int soutput = findItem(word, sword, starget);
    if (soutput != -1)
        cout << "The item " << starget << " found at position : " << soutput << endl;
    else
        cout << "The item '" << starget << "' not found from the array." << endl;

    cout << endl;

    return 0;
}
