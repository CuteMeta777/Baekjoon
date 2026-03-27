#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int paper[128][128];
int white_count = 0;
int blue_count = 0;

void fast_IO() // fold it at start
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solution(int x, int y, int size)
{
    int first_color = paper[x][y];
    bool is_same = true;

    for (int i = x; i < x + size; i++)
    {
        for (int j = y; j < y + size; j++)
        {
            if (paper[i][j] != first_color)
            {
                is_same = false;
                break;
            }
        }
        if (is_same == false)
            break;
    }

    if (is_same == true)
    {
        if (first_color == 0)
            white_count++;
        else
            blue_count++;

        return;
    }

    int half = size / 2;
    solution(x, y, half);
    solution(x, y + half, half);
    solution(x + half, y, half);
    solution(x + half, y + half, half);
}

int main(void)
{
    fast_IO();

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> paper[i][j];

    solution(0, 0, n);

    cout << white_count << endl;
    cout << blue_count << endl;

    return 0;
}