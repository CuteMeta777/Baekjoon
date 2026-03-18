#include <iostream>

using namespace std;

void solution(int N)
{
    for (int i = 1; i <= N; i++)
        cout << i << "\n";
}

int main(void)
{
    int N;
    cin >> N;
    solution(N);

    return 0;
}