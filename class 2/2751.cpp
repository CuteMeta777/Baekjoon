#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const int& a, const int& b)
{
    return a < b;
}

void solution(const int& N, vector<int> numbers)
{
    sort(numbers.begin(), numbers.end(), compare);

    for (int e : numbers)
        cout << e << "\n";
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