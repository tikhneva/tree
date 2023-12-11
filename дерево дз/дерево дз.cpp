#include <iostream>
#include <set>

using namespace std;

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