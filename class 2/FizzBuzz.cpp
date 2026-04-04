#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve()
{
    vector<string> input(3);
    for (int i = 0; i < 3; i++)
        cin >> input[i];

    int extracted_number;
    int number_index;
    for (int i = 0; i < 3; i++)
    {
        if (input[i] != "Fizz" && input[i] != "Buzz" && input[i] != "FizzBuzz")
        {
            extracted_number = stoi(input[i]);
            number_index = i;
            break;
        }
    }
    int result_number = extracted_number + (3 - number_index);

    if (result_number % 3 == 0 && result_number % 5 == 0)
        cout << "FizzBuzz" << endl;
    else if (result_number % 3 == 0)
        cout << "Fizz" << endl;
    else if (result_number % 5 == 0)
        cout << "Buzz" << endl;
    else
        cout << result_number << endl;
}

int main(void)
{
    fastIO();

    solve();

    return 0;
}