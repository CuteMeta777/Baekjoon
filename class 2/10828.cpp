#include <iostream>
#include <stack>

using namespace std;

void solution(const int& N)
{
    stack<int> s;
    string instruction;
    int value;

    for (int n = 0; n < N; n++)
    {
        cin >> instruction;

        if (instruction == "push")
        {
            cin >> value;
            s.push(value);
            continue;
        }
        if (instruction == "pop")
        {
            if (s.empty())
                cout << "-1\n";
            else
            {
                cout << s.top() << "\n";
                s.pop();
            }
            continue;
        }
        if (instruction == "size")
        {
            cout << s.size() << "\n";
            continue;
        }
        if (instruction == "empty")
        {
            if (s.empty())
                cout << "1\n";
            else
                cout << "0\n";
            continue;
        }
        if (instruction == "top")
        {
            if (s.empty())
                cout << "-1\n";
            else
                cout << s.top() << "\n";
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