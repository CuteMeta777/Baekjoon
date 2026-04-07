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
    int A, B, V;
    cin >> A >> B >> V;

    int dayCount = (V - A) / (A - B);
    
    if ((V - A) % (A - B) != 0) dayCount++;
    
    dayCount++;

    cout << dayCount;
}

int main(void)
{
    fastIO();
    
    solve();

    return 0;
}