#include <bits/stdc++.h>
using namespace std;

void acesssingtring()
{
    string str = "Mizanur Rahman Hridu";

    for (auto u : str)
        cout << u;
    cout << endl;

    // Reverse String
    reverse(str.begin(), str.end());
    cout << str << endl;
}

int main()
{
    acesssingtring();
    return 0;
}