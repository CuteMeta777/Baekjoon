#include <iostream>

using namespace std;

void solution(const int A, const int B)
{
    cout << A + B;
    printf("\n");
    cout << A - B;
    printf("\n");
    cout << A * B;
    printf("\n");
    cout << A / B;
    printf("\n");
    cout << A % B;
}

int main(void)
{
    int A, B;
    cin >> A >> B;
    solution(A, B);

    return 0;
}