#include <iostream>
#include <string>

using namespace std;

void solution(const int& T)
{
    int H, W, N;
    int floor, room_number;
    for (int i = 0; i < T; i++)
    {
        cin >> H >> W >> N;

        floor = N % H;
        if (N % H == 0) floor = H;

        room_number = (N / H) + 1;
        if (N % H == 0) room_number--;

        cout << floor;
        if (room_number < 10)
            cout << '0' << room_number;
        else
            cout << room_number;
        cout << "\n";
    }
}

int main(void)
{
    int T;
    cin >> T;

    solution(T);

    return 0;
}