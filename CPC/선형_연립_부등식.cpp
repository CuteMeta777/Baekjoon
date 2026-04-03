#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

#define CUSTOM_MAX 1000000000000LL
#define CUSTOM_MIN -1000000000000LL
int N;
long long maxRange;
long long minRange;
bool noSolution;

long long floor_div(long long d, long long a) 
{
    if (a == 0) return -1; // invalid

    long long Q = d / a;
    long long R = d % a;

    if (R == 0) return d / a;
    else
    {
        if ((d < 0 && a > 0) || (d > 0 && a < 0)) return Q - 1;
        else return Q;
    }
}

long long ceil_div(long long d, long long a) 
{
    if (a == 0) return -1; // invalid

    long long Q = d / a;
    long long R = d % a;

    if (R == 0) return Q;
    else
    {
        if ((d < 0 && a > 0) || (d > 0 && a < 0)) return Q;
        else return Q + 1;
    }
}

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void getInput()
{
    cin >> N;
}

void init()
{
    maxRange = CUSTOM_MAX;
    minRange = CUSTOM_MIN;
    noSolution = false;
}

void solve()
{
    long long A, B, C;
    cin >> A >> B >> C;

    long long D = C - B;
    long long expression;

    if (A == 0)
    {
        if (D < 0)
            noSolution = true;
    }
    else if (A > 0)
    {
        expression = floor_div(D, A);
        if (expression < maxRange)
            maxRange = expression;
    }
    else // A < 0
    {
        expression = ceil_div(D, A);
        if (expression > minRange)
            minRange = expression;
    }
}

void printResult()
{
    if (noSolution == true)
        cout << 0 << endl;
    else if (maxRange == CUSTOM_MAX || minRange == CUSTOM_MIN)
        cout << -1 << endl;
    else if (maxRange < minRange)
        cout << 0 << endl;
    else
        cout << (maxRange - minRange) + 1 << endl;
}

int main(void)
{
    fastIO();

    getInput();
    init();

    while (N--)
    {
        solve();
    }

    printResult();

    return 0;
}