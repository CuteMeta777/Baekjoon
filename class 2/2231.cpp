#include <iostream>

using namespace std;

int solution(const int& N)
{
    int temp;
    int div_sum;

    for (int i = 1; i < N; i++)
    {
        temp = i;
        div_sum = 0;
        while (temp > 0)
        {
            div_sum += (temp % 10);
            temp /= 10;
        }
        div_sum += i;

        if (div_sum == N)
            return i;
    }

    return 0;
}

int main(void)
{
    int N;
    cin >> N;

    cout << solution(N);

    return 0;
}