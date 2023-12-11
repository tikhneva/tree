#include <iostream>
#include <set>
using namespace std;

//////////int

int main()
{
    set<int> Tree;

    Tree.insert(14);
    Tree.insert(10);
    Tree.insert(9);
    Tree.insert(27);
    Tree.insert(21);

    cout << "All tree elements:\n";
    for (const int& elements : Tree)
    {
        cout << elements << "\n";
    }

    Tree.erase(10);
    Tree.erase(27);

    cout << "\nTree elements after removal:\n";
    for (const int& elements : Tree)
    {
        cout << elements << "\n";
    }

    return 0;
}

//////////string

int main()
{
    set<string> Tree;

    Tree.insert("kimchi");
    Tree.insert("ramyeon");
    Tree.insert("bulgogi");
    Tree.insert("bibimbap");
    Tree.insert("samgyeopsal");

    cout << "All tree elements:\n";
    for (const string& elements : Tree) 
    {
        cout << elements << "\n";
    }

    Tree.erase("ramyeon");
    Tree.erase("bibimbap");

    cout << "\nTree elements after removal:\n";
    for (const string& elements : Tree)
    {
        cout << elements << "\n";
    }

    return 0;
}
