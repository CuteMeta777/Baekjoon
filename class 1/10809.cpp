#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solution(const string& word)
{
    vector<int> first_alphabet_position(26);
    for (int& e : first_alphabet_position)
        e = -1;

    int word_length = word.length();
    for (int i = 0; i < word_length; i++)
        if (first_alphabet_position[word[i] - 'a'] == -1) 
            first_alphabet_position[word[i] - 'a'] = i;
    
    for (int e : first_alphabet_position)
        cout << e << " ";
}

int main(void)
{
    string word;
    cin >> word;
    solution(word);

    return 0;
}