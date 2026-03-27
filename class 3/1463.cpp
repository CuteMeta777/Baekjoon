#include <iostream>
#include <vector>

using namespace std;

void solution(int N)
{
    vector<int> count(N + 1); // index: 1 ~ N. (0 is ignored)

    count[0] = 0;
    count[1] = 0;

    for (int i = 2; i <= N; i++)
    {
        count[i] = count[i - 1] + 1;

        if (i % 2 == 0)
            count[i] = min(count[i], count[i / 2] + 1);
        
        if (i % 3 == 0)
            count[i] = min(count[i], count[i / 3] + 1);
    }

    cout << count[N];
}

void fast_IO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(void)
{
    fast_IO();

    int N;
    cin >> N;

    solution(N);

    return 0;
}