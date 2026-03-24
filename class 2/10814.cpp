#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct
{
    int age;
    string name;
    int register_order;
} Person;

bool compare(const Person& a, const Person& b)
{
    if (a.age == b.age)
        return a.register_order < b.register_order;
    else
        return a.age < b.age;
}

void solution(const int& N, vector<Person> people)
{
    sort(people.begin(), people.end(), compare);

    for (Person e : people)
        cout << e.age << " " << e.name << "\n";
}

int main(void)
{
    int N;
    cin >> N;

    vector<Person> people(N);
    for (int i = 0; i < N; i++)
    {
        cin >> people[i].age >> people[i].name;
        people[i].register_order = i;
    }

    solution(N, people);

    return 0;
}