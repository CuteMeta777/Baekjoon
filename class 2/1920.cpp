#include <iostream>
#include <vector>
#include <set>

using namespace std;

void solution(vector<int>& valid, vector<int>& numbers)
{
    set<int> s;

    for (int e : valid)
        s.insert(e);
    
    for (int e : numbers)
    {
        if (s.count(e) >= 1)
            cout << "1\n";
        else
            cout << "0\n";
    }

}   

int main(void)
{
    int N;
    cin >> N;

    vector<int> valid(N);
    for (int& e : valid)
        cin >> e;

    int M;
    cin >> M;

    vector<int> numbers(M);
    for (int& e : numbers)
        cin >> e;

    solution(valid, numbers);

    return 0;
}