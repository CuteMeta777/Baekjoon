#include <iostream>
#include <deque>

using namespace std;

void solution(const int& N, const int& K)
{
    deque<int> q;
    int temp;

    for (int i = 1; i <= N; i++)
        q.push_back(i);

    cout << "<";
    
    while (!q.empty())
    {
        for (int i = 0; i < K - 1; i++)
        {
            temp = q.front();
            q.pop_front();
            q.push_back(temp);
        }

        if (q.size() == 1)
            cout << q.front();
        else
            cout << q.front() << ", ";
        q.pop_front();
    }

    cout << ">";
}

int main(void)
{
    int N, K;
    cin >> N >> K;

    solution(N, K);

    return 0;
}