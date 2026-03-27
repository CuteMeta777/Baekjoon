#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void fast_IO() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int M, N, K;
int input_x, input_y; 
bool field[50][50];
bool visited[50][50];
int bug_count;

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { 1, -1, 0, 0 };

void solution(int x, int y)
{
    visited[x][y] = true;

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < M && ny >= 0 && ny < N) 
        {
            if (field[nx][ny] == true && visited[nx][ny] == false) 
                solution(nx, ny);
        }
    }
}

void reset()
{
    bug_count = 0;

    for (int x = 0; x < 50; x++)
    {
        for (int y = 0; y < 50; y++)
        {
            field[x][y] = false;
            visited[x][y] = false;
        }
    }
}

int main(void)
{
    fast_IO();

    int T;
    cin >> T;

    while (T--) 
    {
        reset();
        
        cin >> M >> N >> K; 
        for (int i = 0; i < K; i++)
        {
            cin >> input_x >> input_y;
            field[input_x][input_y] = true;
        }

        for (int x = 0; x < M; x++)
        {
            for (int y = 0; y < N; y++)
            {
                if (field[x][y] == true && visited[x][y] == false)
                {
                    solution(x, y);
                    bug_count++;
                }
            }
        }

        cout << bug_count << "\n";
    }

    return 0;
}