#include <iostream>
#include <queue>

using namespace std;

void solution(const int& N)
{
    queue<int> q;

    for (int i = N; i >= 1; i--)
        q.push(i);

    while (q.size() > 1)
    {
        q.pop();
        q.
    }
}

int main(void)
{
    int N;
    cin >> N;

    solution(N);

    return 0;
}