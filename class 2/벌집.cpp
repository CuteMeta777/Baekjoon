#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

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

    int roomCount = 1;
    int decrement = 1;

    while (N > 1)
    {
        N -= (decrement * 6);
        roomCount++;
        decrement++;
    }

    cout << roomCount << endl;
}

int main(void)
{
    fastIO();

    solve();

    return 0;
}