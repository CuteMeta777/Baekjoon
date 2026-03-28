#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

unordered_map<string, string> m;

void fast_IO() // fold it at start
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solution(int N, int M)
{
    string pokemon_name;
    for (int i = 1; i <= N; i++)
    {
        cin >> pokemon_name;
        m[pokemon_name] = to_string(i);
        m[to_string(i)] = pokemon_name;
    }

    string quiz_input;
    for (int i = 0; i < M; i++)
    {
        cin >> quiz_input;
        cout << m[quiz_input] << endl;
    }
}

int main(void)
{
    fast_IO();

    int N, M;
    cin >> N >> M;

    solution(N, M);

    return 0;
}