#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n;
vector<int> opinions;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void getInput()
{
    cin >> n;

    if (n == 0) return;

    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        opinions.push_back(temp);
    }
}

void solve()
{
    if (n == 0) 
    {
        cout << 0 << endl;
        return;
    }

    int cut = (int)round(n * 0.15);
    int cut_n = n - (cut * 2);

    int sum = 0;
    sort(opinions.begin(), opinions.end());
    for (int i = cut; i < n - cut; i++)
        sum += opinions[i];

    int result = (int)round((double)sum / cut_n);

    cout << result;
}

int main(void)
{
    fastIO();

    getInput();

    solve();

    return 0;
}