#include <iostream>
#include <vector>

using namespace std;

void solution(const vector<int>& notes)
{
    bool isAscending = true;
    bool isDescending = true;

    int notes_size = notes.size();
    for (int i = 0; i < notes_size - 1; i++)
    {
        if (isAscending == false && isDescending == false) 
        {
            cout << "mixed";
            return;
        }
        if (notes[i + 1] - notes[i] != 1) isAscending = false;
        if (notes[i + 1] - notes[i] != -1) isDescending = false;
    }

    if (isAscending)
    {
        cout << "ascending";
        return;
    }
    if (isDescending)
    {
        cout << "descending";
        return;
    }
}

int main(void)
{
    vector<int> notes(8);
    for (int& e : notes)
        cin >> e;

    solution(notes);

    return 0;
}