#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solution(const int& N, const vector<string>& results)
{
    int combo;
    string target;
    int target_length;
    int score;

    for (int i = 0; i < N; i++)
    {
        combo = 0;
        target = results[i];
        target_length = target.length();
        score = 0;

        for (int j = 0; j < target_length; j++)
        {
            if (target[j] == 'O') 
            { 
                combo++; 
                score += combo; 
                continue;
            }
            if (target[j] == 'X')
            {
                combo = 0;
                continue;
            }
        }

        cout << score << "\n";
    }
}

int main(void)
{
    int N;
    cin >> N;
    vector<string> results(N);
    for (string& s : results)
        cin >> s;
    solution(N, results);

    return 0;
}