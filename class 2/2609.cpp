#include <iostream>
#include <numeric>

using namespace std;

void solution(const int& A, const int& B)
{
    cout << gcd(A, B) << "\n" << lcm(A, B);
}

int main(void)
{
    int A, B;
    cin >> A >> B;

    solution(A, B);

    return 0;
}