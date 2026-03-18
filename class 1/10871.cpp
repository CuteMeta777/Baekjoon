#include <iostream>
#include <vector>

using namespace std;

void solution(const int& N, const int& X, const vector<int>& numbers)
{
    for (int e : numbers)
        if (e < X) cout << e << " ";
}

int main(void)
{
    int N, X;
    cin >> N >> X;

    vector<int> numbers(N);
    for (int& e : numbers)
        cin >> e;

    solution(N, X, numbers);

    return 0;
}