#include <iostream>

using namespace std;

void solution(const string& A, const string& B, const string& C)
{
    cout << stoi(A) + stoi(B) - stoi(C) << "\n";
    cout << stoi(A + B) - stoi(C) << "\n";
}

int main(void)
{
    string A, B, C;
    cin >> A >> B >> C;

    solution(A, B, C);

    return 0;
}