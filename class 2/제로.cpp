#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int K;
stack<int> numbers;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void getInput()
{
    cin >> K;
    int temp;
    for (int i = 0; i < K; i++)
    {
        cin >> temp;
        if (temp == 0)
            numbers.pop();
        else
            numbers.push(temp);
    }
}

void solve()
{
    int sum = 0;

    while (!numbers.empty())
    {
        sum += numbers.top();
        numbers.pop();
    }

    cout << sum;
}

int main(void)
{
    fastIO();

    getInput();

    solve();

    return 0;
}