#include <iostream>
#include <vector>

using namespace std;

void solution(int T)
{
    int range = 11;
    vector<int> methods(range + 1);

    methods[0] = 0;
    methods[1] = 1;
    methods[2] = 2;
    methods[3] = 4;

    for (int i = 4; i <= range; i++)
        methods[i] = methods[i - 1] + methods[i - 2] + methods[i - 3];
    
    int input;
    for (int i = 0; i < T; i++)
    {
        cin >> input;
        cout << methods[input] << "\n";
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