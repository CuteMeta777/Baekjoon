#include <iostream>

using namespace std;

double solution(const double a, const double b)
{
    return a / b;
}

int main(void)
{
    double a, b;
    cin >> a >> b;
    printf("%.10f", solution(a, b));

    return 0;
}