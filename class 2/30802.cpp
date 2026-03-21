#include <iostream>
#include <vector>

using namespace std;

void solution(const int& N, const vector<int>& sizes, const int& T, const int& P)
{
    int shirt_bundle, pen_bundle, pen_left;

    shirt_bundle = 0;
    for (int i = 0; i < sizes.size(); i++)
    {
        shirt_bundle += (sizes[i] / T);
        if (sizes[i] % T != 0)
            shirt_bundle++;
    }

    pen_bundle = N / P;
    pen_left = N % P;

    cout << shirt_bundle << "\n";
    cout << pen_bundle << " " << pen_left;
}

int main(void)
{
    int N;
    vector<int> sizes(6);
    int T, P;

    cin >> N;
    for (int& e : sizes)
        cin >> e;
    cin >> T >> P;

    solution(N, sizes, T, P);

    return 0;
}