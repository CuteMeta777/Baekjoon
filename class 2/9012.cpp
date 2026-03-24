#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

void solution(int T)
{
    stack<char> s;
    string parenthesis;
    bool isValid;

    for (int t = 0; t < T; t++)
    {
        isValid = true;
        cin >> parenthesis;

        while (!s.empty())
            s.pop();

        for (int i = 0; i < parenthesis.length(); i++)
        {
            switch (parenthesis[i])
            {
            case '(':
                s.push('(');
                break;
            case ')':
                if (s.empty()) 
                {
                    isValid = false;
                    break;
                }
                s.pop();
                break;
            default:
                cout << "invalid parenthesis input!\n";
                break;
            }
        }

        if (isValid && s.empty())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main(void)
{
    int T;
    cin >> T;

    solution(T);

    return 0;
}