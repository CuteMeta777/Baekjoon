#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int T;
int N;

void fast_IO() // fold it at start
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solution()
{
    while (T--)
    {
        cin >> N;
        unordered_map<string, int> m;
        string name, type;

        for (int i = 0; i < N; i++)
        {
            cin >> name >> type;
            m[type]++;
        }

        int result = 1;
        for (auto [type, count] : m)
        {
            result *= (count + 1);
        }
        cout << result - 1 << endl;
    }
}

int main(void)
{
    fast_IO();

    cin >> T;

    solution();

    return 0;
}