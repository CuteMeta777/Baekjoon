#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void fast_IO() // fold it at start
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solution(const long long& N, const long long& M, const vector<long long>& heights)
{
    long long max_height = *max_element(heights.begin(), heights.end());

    long long left = 0;
    long long right = max_height;

    long long mid;
    long long total_wood;

    long long answer;
    
    while (left <= right)
    {
        total_wood = 0;
        mid = (left + right) / 2;

        for (int i = 0; i < N; i++)
        {
            if (heights[i] > mid)
                total_wood += (heights[i] - mid);
        }

        if (total_wood >= M)
        {
            answer = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << answer;
}

int main(void)
{
    fast_IO();

    long long N, M;
    cin >> N >> M;

    vector<long long> heights(N);
    for (long long& e : heights)
        cin >> e;

    solution(N, M, heights);

    return 0;
}