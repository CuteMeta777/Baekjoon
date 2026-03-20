#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void solution()
{
    vector<int> sides(3);
    bool isQuit;
    int a, b, hypotenuse;

    while (true)
    {
        for (int& e : sides)
            cin >> e;

        isQuit = true;
        for (int e : sides)
            if (e != 0) isQuit = false;
        if (isQuit) return;

        sort(sides.begin(), sides.end());
        a = sides[0];
        b = sides[1];
        hypotenuse = sides[2];

        if (round(pow(hypotenuse, 2)) == round(pow(a, 2)) + round(pow(b, 2)))
        {
            cout << "right" << "\n";
            continue;
        }
        else
        {
            cout << "wrong" << "\n";
            continue;
        }
    }

}

int main(void)
{
    solution();

    return 0;
}