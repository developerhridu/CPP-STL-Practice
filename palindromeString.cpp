#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void palindromeOrNot()
{
    string str;
    string tmp;

    cin >> str >> tmp;

    reverse(tmp.begin(), tmp.end());

    if (str == tmp)
        cout << "palindrome \n";
    else
        cout << "Not palindrome";
}

int main()
{
    palindromeOrNot();

    return 0;
}