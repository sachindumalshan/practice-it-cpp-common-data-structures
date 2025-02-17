#include <iostream>
#include <vector>

using namespace std;

void findPrimes(const int arr[], size_t size, std::vector<int> &primes)
{
    int temp_count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < arr[i]+1; j++)
        {
            if (arr[i] % j == 0)
                temp_count++;
        }

        if (temp_count == 2)
        {
            primes.push_back(arr[i]);
        }
        temp_count = 0;
    }
}

int main()
{
    int numbers[]{4, 7, 12, 3, 9, 17, 29};

    size_t size = sizeof(numbers) / sizeof(numbers[0]);
    vector<int> primes;

    findPrimes(numbers, size, primes);

    if (primes.empty())
    {
        cout << "No prime numbers found in the array.";
    }
    else
    {
        cout << "The prime numbers in the array are:";
        for (int prime : primes)
        {
            cout << " " << prime;
        }
        cout << endl;
    }
    return 0;
}
