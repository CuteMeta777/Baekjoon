#include <iostream>

using namespace std;

void solution(const int& H, const int& M)
{
    int modified_H = H;
    int modified_M = M - 45;

    if (modified_M < 0)
    {
        modified_H -= 1;
        modified_M += 60;
    }

    if (modified_H < 0)
    {
        modified_H += 24;
    }

    cout << modified_H << " " << modified_M;
}

int main(void)
{
    int H, M; // hour, minute
    cin >> H >> M;
    solution(H, M);

    return 0;
}