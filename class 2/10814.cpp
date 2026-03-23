#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct
{
    int age;
    string name;
} Person;

bool compare(const int& a, const int& b)
{
    return a < b;
}

void solution(const int& N, vector<int> numbers)
{
    sort(numbers.begin(), numbers.end(), compare);

    for (int e : numbers)
        cout << e << "\n";
}

int main(void)
{
    int N;
    cin >> N;

    vector<Person> person(N);
    for (int i = 0; i < N; i++)
    {
        cin >> person[i].age >> person.name;
    }

    solution(N, numbers);

    return 0;
}