#include <iostream>

using namespace std;

int solution(const int& A, const int& B)
{
    return A * B;
}

int main(void)
{
    int A, B;
    cin >> A >> B;
    cout << solution(A, B);

    return 0;
}