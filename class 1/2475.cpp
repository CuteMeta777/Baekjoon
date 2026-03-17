#include <iostream>
#include <vector>

using namespace std;

int solution(const vector<int>& numbers)
{
    int parity = 0;
    for (int e : numbers)
        parity += (e * e);
    return parity % 10;
}

int main(void)
{
    int numbers_count = 5;
    vector<int> numbers(numbers_count);
    for (int& e : numbers)
        cin >> e;
    cout << solution(numbers);

    return 0;
}