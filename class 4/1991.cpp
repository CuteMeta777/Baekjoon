#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int N;
int tree[26][2];

void fastIO() // fold it at start
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void initTree()
{
    int nodeCount = 26;
    for (int i = 0; i < nodeCount; i++)
    {
        tree[i][0] = -1;
        tree[i][1] = -1;
    }
}

void getInput()
{
    cin >> N;

    char parent, left, right;
    for (int i = 0; i < N; i++)
    {
        cin >> parent >> left >> right;

        if (left != '.')
            tree[parent - 'A'][0] = left - 'A';

        if (right != '.')
            tree[parent - 'A'][1] = right - 'A';
    }
}

void preorder(int node)
{
    if (node == -1)
        return;

    cout << (char)(node + 'A');
    preorder(tree[node][0]);
    preorder(tree[node][1]);
}

void inorder(int node)
{
    if (node == -1)
        return;

    inorder(tree[node][0]);
    cout << (char)(node + 'A');
    inorder(tree[node][1]);
}

void postorder(int node)
{
    if (node == -1)
        return;

    postorder(tree[node][0]);
    postorder(tree[node][1]);
    cout << (char)(node + 'A');
}

int main(void)
{
    fastIO();

    initTree();
    getInput();

    preorder(0);
    cout << endl;
    inorder(0);
    cout << endl;
    postorder(0);

    return 0;
}