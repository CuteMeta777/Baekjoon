#include <iostream>
#include <vector>
#include <set>

using namespace std;

int solution(const vector<int>& numbers)
{
    set<int> s;
    for (int e : numbers)
        s.insert(e % 42);
    return s.size();
}

int main(void)
{
    vector<int> numbers(10);
    for (int& e : numbers)
        cin >> e;

    cout << solution(numbers);

    return 0;
}