#include <iostream>
#include <vector>

using namespace std;

void solution(int N, int T, const vector<int>& numbers)
{
    vector<int> cul_sum(N + 1);

    cul_sum[0] = 0;
    for (int u = 1; u <= N; u++)
        cul_sum[u] = cul_sum[u - 1] + numbers[u];

    for (int t = 0; t < T; t++)
    {
        int i, j;
        cin >> i >> j;
        cout << cul_sum[j] - cul_sum[i - 1] << "\n";
    }
}

void fast_IO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(void)
{
    fast_IO();

    int N, T;
    cin >> N >> T;

    vector<int> numbers(N + 1);
    numbers[0] = 0;
    for (int i = 1; i <= N; i++)
        cin >> numbers[i];

    solution(N, T, numbers);

    return 0;
}