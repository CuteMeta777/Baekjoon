#include <iostream>

using namespace std;

int solution(const string& input)
{
    int blank_count = 0;

    int input_length = input.length();
    for (int i = 0; i < input_length; i++)
    {
        if (input[i] == ' ') 
            blank_count++;
    }

    int word_count = blank_count + 1;
    if (input[0] == ' ')
        word_count--;
    if (input[input_length - 1] == ' ')
        word_count--;

    return word_count;
}

int main(void)
{
    string input;
    getline(cin, input);

    cout << solution(input);

    return 0;
}