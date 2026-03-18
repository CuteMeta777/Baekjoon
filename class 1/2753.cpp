#include <iostream>

using namespace std;

int solution(int year)
{
    if (year % 4 == 0 && year % 100 != 0) return 1;
    if (year % 400 == 0) return 1;
    return 0;
}

int main(void)
{
    int year;
    cin >> year;
    cout << solution(year);

    return 0;
}