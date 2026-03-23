#include <iostream>

using namespace std;

int solution(const int& N, const int& K)
{
    int bunja = 1;
    int bunmo = 1;
    int N_copy = N;
    
    for (int i = 0; i < K; i++)
    {
        bunja *= N_copy;
        N_copy--;
    }
    
    for (int i = 1; i <= K; i++)
        bunmo *= i;
    
    return bunja / bunmo;
}

int main(void)
{
    int N, K;
    cin >> N >> K;

    cout << solution(N, K);

    return 0;
}