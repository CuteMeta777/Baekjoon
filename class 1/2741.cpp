#include <iostream>

using namespace std;

void solution(int N)
{
    for (int i = 1; i <= 9; i++)
        cout << N << " * " << i << " = " << N * i << endl;
}

int main(void)
{
    int N;
    cin >> N;
    solution(N);

    return 0;
}