#include <iostream>
#include <vector>

using namespace std;

int infected_computer_count = 0;

void solution(int target_index, const vector<vector<int>>& pairs, vector<bool>& is_visited)
{
    is_visited[target_index] = true;

    for (int i = 0; i < pairs[target_index].size(); i++)
    {
        int target_node = pairs[target_index][i];

        if (is_visited[target_node] == false)
        {
            infected_computer_count++;
            solution(target_node, pairs, is_visited);
        }
    }
}

void fast_IO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(void)
{
    fast_IO();

    int computer_count;
    int pair_count;
    cin >> computer_count >> pair_count;

    vector<vector<int>> pairs(101);
    int head, tail;
    for (int i = 0; i < pair_count; i++)
    {
        cin >> head >> tail;
        pairs[head].push_back(tail);
        pairs[tail].push_back(head);
    }

    vector<bool> is_visited(101);

    solution(1, pairs, is_visited);

    cout << infected_computer_count;

    return 0;
}