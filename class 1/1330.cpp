#include <iostream>

using namespace std;

void solution(int a, int b)
{
    if (a == b)
    {
        cout << "==";
        return;
    }

    if (a > b)
    {
        cout << ">";
        return;
    }

    if (a < b)
    {
        cout << "<";
        return;
    }
    
}

int main(void)
{
    int a, b;
    cin >> a >> b;
    solution(a, b);

    return 0;
}