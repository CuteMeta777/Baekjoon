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
    priority_queue<int> max_heap;

    while (N--)
    {
        cin >> x;

        if (x == 0)
        {
            if (max_heap.empty())
                cout << "0" << endl;
            else
            {
                cout << max_heap.top() << endl;
                max_heap.pop();
            }
        }
        else
        {
            max_heap.push(x);
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