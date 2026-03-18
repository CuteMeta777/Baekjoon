#include <iostream>
#include <vector>

using namespace std;

int solution(const int& N, const vector<int>& numbers)
{
    int sum = 0;

    for (int e : numbers)
        sum += e;
    
    return sum;
}

int main(void)
{
    int N;
    cin >> N;
    vector<int> numbers(N);
    string input;
    cin >> input;
    for (int i = 0; i < N; i++)
        numbers[i] = input[i] - '0';

    cout << solution(N, numbers);

    return 0;
}