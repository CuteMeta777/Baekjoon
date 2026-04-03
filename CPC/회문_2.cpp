#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int T;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void getInput()
{
    cin >> T;
}

void solve()
{
    int A; // 10진수
    cin >> A;
    cout << A - 1 << endl;
}

int main(void)
{
    fastIO();

    getInput();

    while (T--)
    {
        solve();
    }

    return 0;
}