#include <iostream>
#include <map>
#include <string>

using namespace std;

void solution(int N, int M)
{
    map<string, int> m;
    string name_input;
    int answer = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> name_input;
        m[name_input]++;
    }

    for (int i = 0; i < M; i++)
    {
        cin >> name_input;
        m[name_input]++;
        if (m[name_input] >= 2)
            answer++;
    }

    cout << answer << "\n";
    for (auto e : m)
    {
        if (e.second >= 2)
            cout << e.first << "\n";
    }
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

    int N, M;
    cin >> N >> M;

    solution(N, M);

    return 0;
}