#include <iostream>

using namespace std;

char solution(int score)
{
    if (score >= 90 && score <= 100) return 'A';
    if (score >= 80 && score <= 89) return 'B';
    if (score >= 70 && score <= 79) return 'C';
    if (score >= 60 && score <= 69) return 'D';
    return 'F';
}

int main(void)
{
    int score;
    cin >> score;
    cout << solution(score);

    return 0;
}