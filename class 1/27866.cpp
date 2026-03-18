#include <iostream>
#include <string>

using namespace std;

char solution(const string& input, const int& N)
{
    return input[N - 1];
}

int main(void)
{
    string input;
    int N;
    cin >> input >> N;
    cout << solution(input, N);

    return 0;
}