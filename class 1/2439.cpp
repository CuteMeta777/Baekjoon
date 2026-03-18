#include <iostream>

using namespace std;

void solution(const int& N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
            cout << " ";
        
        for (int j = 0; j < i + 1; j++)
            cout << "*";
        
        cout << "\n";
    }
}

int main(void)
{
    int N;
    cin >> N;
    solution(N);

    return 0;
}