#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const int& a, const int& b)
{
    return a < b;
}

int solution(vector<int> times)
{
    sort(times.begin(), times.end(), compare);

    int sum = 0;
    int addon = 0;

    for (int i = 0; i < times.size(); i++)
    {
        addon += times[i];
        sum += addon;
    }

    return sum;
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

    vector<int> times(N);
    for (int& e : times)
        cin >> e;

    cout << solution(times);

    return 0;
}