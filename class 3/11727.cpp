#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

using namespace std;

void fast_IO() // fold it at start
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solution(int n)
{
    vector<int> dp(1000);

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 3;

    for (int i = 3; i <= n; i++)
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 2]) % 10007;

    cout << dp[n];
}

int main(void)
{
    fast_IO();

    int n;
    cin >> n;

    solution(n);

    return 0;
}