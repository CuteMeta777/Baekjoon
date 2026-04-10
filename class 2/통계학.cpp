#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int N;
vector<int> numbers;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void getInput()
{
    cin >> N;
    int temp;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        numbers.push_back(temp);
    }
}

void avg()
{
    int sum = 0;
    for (int i = 0; i < N; i++)
        sum += numbers[i];

    double double_casted_sum = (double)sum;
    cout << (int)round(double_casted_sum / N) << endl;
}

void mid()
{
    sort(numbers.begin(), numbers.end());
    cout << numbers[N / 2] << endl;
}

void freq()
{
    vector<int> counts(8001);
    for (int i = 0; i < N; i++)
        counts[4000 + numbers[i]]++; // counts[0] = -4000의 출현 횟수. 
    
    int maxFreq = 0;
    for (int i = 0; i <= 8000; i++)
        if (counts[i] > maxFreq)
            maxFreq = counts[i];

    vector<int> candidates;
    for (int i = 0; i <= 8000; i++)
        if (counts[i] == maxFreq)
            candidates.push_back(i - 4000);

    if (candidates.size() > 1)
    {
        sort(candidates.begin(), candidates.end());
        cout << candidates[1] << endl;
    }
    else
    {
        cout << candidates[0] << endl;
    }
}

void range()
{
    cout << numbers[N - 1] - numbers[0] << endl;
}

void solve()
{
    avg();
    mid();
    freq();
    range();
}

int main(void)
{
    fastIO();

    getInput();

    solve();

    return 0;
}