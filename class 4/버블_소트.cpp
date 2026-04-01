#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// declare
int N; // 1 ~ 500,000
vector<pair<int, int>> A; // 0 ~ 1,000,000

void fastIO() // fold it at start
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void getInput()
{
    cin >> N;
    A.resize(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i].first;
        A[i].second = i;
    }
}

void bubbleSort()
{
    bool isSwapped;
    for (int i = 1; i <= N + 1; i++) 
    {
        isSwapped = false;
        for (int j = 1; j <= N - i; j++) 
        {
            if (A[j] > A[j + 1]) 
            {
                isSwapped = true;
                swap(A[j], A[j + 1]);
            }
        }
        if (isSwapped == false) 
        {
            cout << i << '\n';
            break;
        }
    }
}

void solution()
{
    sort(A.begin(), A.end());

    int diff;
    int maxDiff = 0;
    for (int i = 0; i < N; i++)
    {
        diff = A[i].second - i;
        if (diff > maxDiff)
            maxDiff = diff;
    }

    cout << maxDiff + 1;
}

int main(void)
{
    fastIO();

    getInput();
    solution();

    return 0;
}