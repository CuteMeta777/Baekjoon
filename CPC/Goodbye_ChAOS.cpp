#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// declare
int T;
vector<string> contests[26];

void fastIO() // fold it at start
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void getInput()
{
    cin >> T;
}

void initContests() 
{
    contests[17] = { "CodeRace", "Chung-Ang_Programming_Contest" };
    contests[18] = { "CodeRace", "SCAL-MOOKJA" };
    contests[19] = { "Newbie_Programming_Contest", "Chung-Ang_Programming_Contest" };
    contests[20] = { "Chung-Ang_Programming_Contest" };
    contests[21] = { "Newbie_Programming_Challenge" };
    contests[22] = { "ChAOS_Hello{Year}_Algorithm_Contest", "Chung-Ang_Programming_Contest" };
    contests[23] = { "Kookmin_Chung-Ang_Programming_Contest", "ChAOS_Hello{Year}_Algorithm_Contest" };
    contests[24] = { "Kookmin_Chung-Ang_Programming_Contest", "Chung-Ang_Programming_Contest" };
    contests[25] = { "Centroid_Cup", "Chung-Ang_Programming_Contest" };

    for (int i = 17; i <= 25; i++)
        sort(contests[i].begin(), contests[i].end());
}

void solution() 
{
    int N;
    cin >> N;
    
    vector<string> input(N);
    for (int i = 0; i < N; i++)
        cin >> input[i];
    
    sort(input.begin(), input.end());
    
    int target_year = -1;
    for (int i = 17; i <= 25; i++)
    {
        if (input == contests[i])
        {
            target_year = i;
            break;
        }
    }
    
    if (target_year != -1)
        cout << "20" << target_year << endl;
    else
        cout << "Goodbye, ChAOS!" << endl;
}

int main(void)
{
    fastIO();

    initContests();
    getInput();

    while (T--)
        solution();

    return 0;
}