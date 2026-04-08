#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef struct
{
    int x;
    int y;
} Point;

int input_x, input_y;
vector<Point> points;

void getInputs()
{
    cin >> input_x >> input_y;
    points.push_back({input_x, input_y});
}

bool compare(const Point& a, const Point& b)
{
    if (a.y == b.y) return a.x < b.x;
    else return a.y < b.y;
}

void solve()
{
    sort(points.begin(), points.end(), compare);

    for (int i = 0; i < points.size(); i++)
        cout << points[i].x << " " << points[i].y << endl;
}

int main(void)
{
    int N;
    cin >> N;

    while (N--)
    {
        getInputs();
    }

    solve();

    return 0;
}