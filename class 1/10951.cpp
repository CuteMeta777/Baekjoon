#include <iostream>

using namespace std;

void solution()
{
    int A, B;

    while (true)
    {
        cin >> A >> B;
        if (cin.fail()) break;
        cout << A + B << "\n";
    }
}

int main(void)
{
    solution();

    return 0;
}