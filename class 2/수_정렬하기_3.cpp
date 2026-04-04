#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int counter[10001];

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve()
{
    int N;
    cin >> N;
    int number;
    for (int i = 0; i < N; i++)
    {
        cin >> number;
        counter[number]++;
    }

    for (int n = 1; n <= 10000; n++)
        for (int j = 0; j < counter[n]; j++)
            cout << n << endl;
}

int main(void)
{
    fastIO();

    solve();

    return 0;
}