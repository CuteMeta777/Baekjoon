#include <iostream>
#include <vector>

using namespace std;

void solution(const vector<int>& numbers)
{
    int max_value = numbers[0];
    int max_index = 0;
    int numbers_size = numbers.size();
    for (int i = 0; i < numbers_size; i++)
    {
        if (max_value < numbers[i])
        {
            max_value = numbers[i];
            max_index = i;
        }
    }
    cout << max_value << "\n" << max_index + 1;
}

int main(void)
{
    int numbers_size = 9;
    vector<int> numbers(numbers_size);
    for (int i = 0; i < numbers_size; i++)
        cin >> numbers[i];

    solution(numbers);

    return 0;
}