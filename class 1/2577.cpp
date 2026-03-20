#include <iostream>
#include <vector>

using namespace std;

void solution(const int& A, const int& B, const int& C)
{
    int mult = A * B * C;
    vector<int> result(10);
    for (int& e : result)
        e = 0;
    int digit;

    while (mult > 0)
    {
        digit = mult % 10;
        mult /= 10;
        result[digit]++;
    }

    for (int& e : result)
        cout << e << "\n";
}

int main(void)
{
    int A, B, C;
    cin >> A >> B >> C;

    solution(A, B, C);

    return 0;
}