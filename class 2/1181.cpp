#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(const string& a, const string& b)
{
    if (a.length() == b.length())
        return a < b;
    else
        return a.length() < b.length();
}

void solution(const int& N, vector<string> words)
{
    sort(words.begin(), words.end(), compare);

    words.erase(unique(words.begin(), words.end()), words.end());

    for (string e : words)
        cout << e << "\n";
}

int main(void)
{
    int N;
    cin >> N;

    vector<string> words(N);
    for (string& e : words)
        cin >> e;

    solution(N, words);

    return 0;
}