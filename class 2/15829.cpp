#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void fast_IO() // fold it at start
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solution(const int& L, const string& word)
{
    long long alphabet_value;
    long long cul_pow_31 = 1;
    long long M = 1234567891;
    long long result = 0;
    long long term;

    for (int i = 0; i < L; i++)
    {
        alphabet_value = (long long)(word[i] - 'a' + 1);

        term = (alphabet_value * cul_pow_31) % M;

        result += term;

        cul_pow_31 = (cul_pow_31 * 31) % M;
    }

    cout << result % M;
}

int main(void)
{
    fast_IO();

    int L;
    cin >> L;

    string word;
    cin >> word;

    solution(L, word);

    return 0;
}