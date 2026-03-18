#include <iostream>

using namespace std;

void solution(const int& A, const int& B, const int& C)
{
    cout << A + B - C << "\n";
    cout << ((A * 10) + B) - C << "\n";
}

int main(void)
{
    int A, B, C;
    cin >> A >> B >> C;

    solution(A, B, C);

    return 0;
}