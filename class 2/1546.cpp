#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

float solution(const int& N, const vector<int>& scores)
{
    vector<float> new_scores(N);

    float max_score = *max_element(scores.begin(), scores.end());
    for (int i = 0; i < scores.size(); i++)
        new_scores[i] = scores[i] / max_score * 100;
    
    float sum = 0;
    for (float e : new_scores)
        sum += e;
    
    return sum / new_scores.size();
}

int main(void)
{
    int N;
    cin >> N;
    vector<int> scores(N);
    for (int& e : scores)
        cin >> e;

    cout << fixed;
    cout.precision(4);
    cout << solution(N, scores);

    return 0;
}