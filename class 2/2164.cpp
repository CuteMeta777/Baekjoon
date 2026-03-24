#include <iostream>
#include <deque>

using namespace std;

int solution(const int& N)
{
    deque<int> q;

    for (int i = 1; i <= N; i++)
        q.push_back(i);

    while (q.size() > 1)
    {
        q.pop_front();
        q.push_back(q.front());
        q.pop_front();
    }

    return q.front();
}

int main(void)
{
    int N;
    cin >> N;

    cout << solution(N);

    return 0;
}