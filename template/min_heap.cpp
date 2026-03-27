#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef struct 
{
    int x;
    int y;
    int cost;
} Bundle;

typedef struct
{
    // "reversed" ordinary compare logic.
    bool operator() (const Bundle& a, const Bundle& b) 
    {
        if (a.cost == b.cost)
            return a.x > b.x;

        return a.cost > b.cost;
    }
} compare;

priority_queue<Bundle, vector<Bundle>, compare> min_heap;