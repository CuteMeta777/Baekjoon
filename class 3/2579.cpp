#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int stair_count;
vector<int> scores;
int dp[301];

void fast_IO() // fold it at start
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solution()
{
    int temp;
    scores.push_back(-1); // scores[0] has a trash value.
    for (int i = 0; i < stair_count; i++)
    {
        cin >> temp;
        scores.push_back(temp);
    }

    dp[0] = 0; // not a valid value
    if (stair_count >= 1) dp[1] = scores[1];
    if (stair_count >= 2) dp[2] = scores[1] + scores[2];
    if (stair_count >= 3) dp[3] = max(scores[1] + scores[3], scores[2] + scores[3]);

    for (int i = 4; i <= stair_count; i++)
        dp[i] = max(dp[i - 2] + scores[i], dp[i - 3] + scores[i - 1] + scores[i]);

    cout << dp[stair_count] << endl;
}

int main(void)
{
    fast_IO();

    cin >> stair_count;

    solution();

    return 0;
}