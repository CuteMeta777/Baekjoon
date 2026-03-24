#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void solution(const vector<int>& numbers, const vector<int>& targets)
{
    unordered_map<int, int> m; // key = card_number, value = number_count

    for (int i = 0; i < numbers.size(); i++)
        m[numbers[i]]++;
    
    for (int i = 0; i < targets.size(); i++)
        cout << m[targets[i]] << " ";
}

int main(void)
{
    int N;
    cin >> N;

    vector<int> numbers(N);
    for (int& e : numbers)
        cin >> e;

    int M;
    cin >> M;

    vector<int> targets(M);
    for (int& e : targets)
        cin >> e;

    solution(numbers, targets);

    return 0;
}