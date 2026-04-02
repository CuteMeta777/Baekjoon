#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// declare
int T, N;

void fastIO() // fold it at start
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void getInput()
{
    cin >> T;
}

void solution()
{
    long long result;

    for (int t = 0; t < T; t++)
    {
        cin >> N;

        if (N % 3 != 0)
            result = 0;
        else
            result = pow(2, N / 3);

        cout << result << endl;
    }
}

int main(void)
{
    fastIO();

    getInput();
    solution();

    return 0;
}