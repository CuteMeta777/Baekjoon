#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void fast_IO() // fold it at start
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solution(int& N)
{
    int x;
    priority_queue<int, vector<int>, greater<int>> min_heap;

    while (N--)
    {
        cin >> x;

        if (x == 0)
        {
            if (min_heap.empty())
                cout << "0" << endl;
            else
            {
                cout << min_heap.top() << endl;
                min_heap.pop();
            }
        }
        else
        {
            min_heap.push(x);
        }
    }
}

int main(void)
{
    fast_IO();

    int N;
    cin >> N;

    solution(N);

    return 0;
}