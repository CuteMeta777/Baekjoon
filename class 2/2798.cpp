#include <iostream>
#include <vector>

using namespace std;

int solution(const int& N, const int& M, const vector<int>& numbers)
{
    int sum_max = 0;
    int sum;

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                sum = numbers[i] + numbers[j] + numbers[k];
                if (sum <= M && sum > sum_max)
                    sum_max = sum;
            }
        }
    }

    return sum_max;
}

int main(void)
{
    int N, M;
    cin >> N >> M;

    vector<int> numbers(N);
    for (int& e : numbers)
        cin >> e;

    cout << solution(N, M, numbers);

    return 0;
}