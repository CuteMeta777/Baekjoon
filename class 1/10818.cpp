#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const int& a, const int& b)
{
    return a > b;
}

void solution(const int& N, vector<int> numbers)
{
    sort(numbers.begin(), numbers.end());
    cout << numbers[0] << " ";
    sort(numbers.begin(), numbers.end(), compare);
    cout << numbers[0] << " ";
}

int main(void)
{
    int N;
    cin >> N;
    vector<int> numbers(N);
    for (int& e : numbers)
        cin >> e;

    solution(N, numbers);

    return 0;
}