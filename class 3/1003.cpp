#include <iostream>
#include <vector>

using namespace std;

void solution(int T)
{
    int range = 40;
    vector<int> zero_count(range + 1);
    vector<int> one_count(range + 1);

    zero_count[0] = 1;
    one_count[0] = 0;

    zero_count[1] = 0;
    one_count[1] = 1;

    for (int i = 0; i <= range - 2; i++)
    {
        zero_count[i + 2] = zero_count[i + 1] + zero_count[i];
        one_count[i + 2] = one_count[i + 1] + one_count[i];
    }

    int input;
    for (int i = 0; i < T; i++)
    {
        cin >> input;
        cout << zero_count[input] << " " << one_count[input] << "\n";
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

    int T;
    cin >> T;

    solution(T);

    return 0;
}