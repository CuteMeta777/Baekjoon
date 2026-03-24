#include <iostream>
#include <deque>

using namespace std;

void solution(const int& N)
{
    deque<int> q;
    string instruction;
    int value;

    for (int n = 0; n < N; n++)
    {
        cin >> instruction;

        if (instruction == "push")
        {
            cin >> value;
            q.push_back(value);
            continue;
        }
        if (instruction == "pop")
        {
            if (q.empty())
                cout << "-1\n";
            else
            {
                cout << q.front() << "\n";
                q.pop_front();
            }
            continue;
        }
        if (instruction == "size")
        {
            cout << q.size() << "\n";
            continue;
        }
        if (instruction == "empty")
        {
            if (q.empty())
                cout << "1\n";
            else
                cout << "0\n";
            continue;
        }
        if (instruction == "front")
        {
            if (q.empty())
                cout << "-1\n";
            else
                cout << q.front() << "\n";
            continue;
        }
        if (instruction == "back")
        {
            if (q.empty())
                cout << "-1\n";
            else
                cout << q.back() << "\n";
            continue;
        }
    }
}

int main(void)
{
    int N;
    cin >> N;

    solution(N);

    return 0;
}