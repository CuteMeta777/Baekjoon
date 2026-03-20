#include <iostream>
#include <string>

using namespace std;

void solution(const int& T)
{
    int N;
    string input;

    for (int i = 0; i < T; i++)
    {   
        cin >> N >> input;
        int input_length = input.length();

        for (int j = 0; j < input_length; j++)
            for (int k = 0; k < N; k++) 
                cout << input[j];

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