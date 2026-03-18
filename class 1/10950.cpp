#include <iostream>

using namespace std;

void solution(const int& T)
{
    int A, B;

    for (int i = 0; i < T; i++)
    {
        cin >> A >> B;
        cout << A + B << "\n";
    }
}

int main(void)
{
    int T;
    cin >> T;

    solution(T);

    return 0;
}