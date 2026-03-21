#include <iostream>
#include <vector>

using namespace std;

int solution(const int& N, const vector<int>& numbers)
{
    int primeNumberCount = 0;
    bool isPrimeNumber;

    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] == 1)
            continue;

        isPrimeNumber = true;
        for (int j = 2; j * j <= numbers[i]; j++)
        {
            if (numbers[i] % j == 0)
            {
                isPrimeNumber = false;
                break;
            }
        }
        
        if (isPrimeNumber)
            primeNumberCount++;
    }

    return primeNumberCount;
}

int main(void)
{
    int N;
    cin >> N;

    vector<int> numbers(N);
    for (int& e : numbers)
        cin >> e;

    cout << solution(N, numbers);

    return 0;
}