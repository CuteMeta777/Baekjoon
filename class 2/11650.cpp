#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct
{
    int x;
    int y;
} Point;

bool compare(const Point& a, const Point& b)
{
    if (a.x == b.x)
        return a.y < b.y;
    else
        return a.x < b.x;
}

void solution(const int& N, vector<Point>& points)
{
    sort(points.begin(), points.end(), compare);
}

int main(void)
{
    int N;
    cin >> N;

    vector<Point> points(N);
    for (int i = 0; i < N; i++)
        cin >> points[i].x >> points[i].y;

    solution(N, points);

    for (Point e : points)
        cout << e.x << " " << e.y << "\n";

    return 0;
}