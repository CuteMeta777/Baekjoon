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
    string site_address_input;
    string password_input;
    for (int i = 0; i < N; i++)
    {
        cin >> site_address_input >> password_input;
        m[site_address_input] = password_input;
    }

    for (int i = 0; i < M; i++)
    {
        cin >> site_address_input;
        cout << m[site_address_input] << endl;
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