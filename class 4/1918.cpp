#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

string expression;
string result;
stack<char> s;

void fast_IO() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int get_priority(char op) 
{
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    if (op == '(' || op == ')') return 0;
    return -1;
}

void solution()
{
    for (int i = 0; i < expression.size(); i++)
    {
        char target = expression[i];

        // 연산자인 경우
        if (target == '+' || target == '-' || target == '*' || target == '/')
        {
            while (!s.empty() && get_priority(target) <= get_priority(s.top()))
            {
                result += s.top();
                s.pop();
            }
            s.push(target);
        }
        // (
        else if (target == '(')
        {
            s.push(target);
        }
        // )
        else if (target == ')')
        {
            while (!s.empty() && s.top() != '(')
            {
                result += s.top();
                s.pop();
            }
            s.pop();
        }
        // 피연산자
        else
        {
            result += target;
        }
    }

    while (!s.empty())
    {
        result += s.top();
        s.pop();
    }

    cout << result << endl;
}

int main(void)
{
    fast_IO();

    cin >> expression;

    solution();

    return 0;
}