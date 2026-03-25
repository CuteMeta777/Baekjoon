#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solution(int M, vector<int>& s)
{
    string instruction;
    int value;

    for (int i = 0; i < M; i++)
    {
        cin >> instruction;

        if (instruction == "add")
        {
            cin >> value;
            s[value - 1] = 1;
            continue;
        }
        if (instruction == "remove")
        {
            cin >> value;
            s[value - 1] = 0;
            continue;
        }
        if (instruction == "check")
        {
            cin >> value;
            if (s[value - 1] != 0)
                cout << "1\n";
            else
                cout << "0\n";
            continue;
        }
        if (instruction == "toggle")
        {
            cin >> value;
            if (s[value - 1] != 0)
                s[value - 1] = 0;
            else
                s[value - 1] = 1;
            continue;
        }
        if (instruction == "all")
        {
            for (int j = 0; j < 20; j++)
                s[j] = 1;
            continue;
        }
        if (instruction == "empty")
        {
            for (int j = 0; j < 20; j++)
                s[j] = 0;
            continue;
        }
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

    int M;
    cin >> M;

    vector<int> s(20);
    for (int& e : s)
        e = 0;

    solution(M, s);

    return 0;
}