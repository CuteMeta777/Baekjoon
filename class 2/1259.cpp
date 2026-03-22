#include <iostream>
#include <string>

using namespace std;

void solution()
{
    string N;
    bool isPalindrome;

    while (true)
    {
        cin >> N;
        if (N[0] == '0') return;

        isPalindrome = true;
        for (int i = 0; i < N.length() / 2; i++)
        {
            if (N[i] != N[N.length() - 1 - i])
            {
                isPalindrome = false;
                break;
            }
        }

        if (isPalindrome)
            cout << "yes\n";
        else    
            cout << "no\n";
    }
}

int main(void)
{
    solution();

    return 0;
}