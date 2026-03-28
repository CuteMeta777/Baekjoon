#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<int> unit_coins;

void fast_IO() // fold it at start
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solution(int N, int K)
{
    int input;
    for (int i = 0; i < N; i++)
    {
        cin >> input;
        unit_coins.push_back(input);
    }

    int total_required_coin_count = 0;
    int value = K;
    int index = unit_coins.size() - 1;
    while (index >= 0)
    {
        if (value >= unit_coins[index])
        {
            total_required_coin_count += (value / unit_coins[index]);
            value %= unit_coins[index];
        }
        index--;
    }

    cout << total_required_coin_count << endl;
}

int main(void)
{
    fast_IO();

    int N, K;
    cin >> N >> K;

    solution(N, K);

    return 0;
}