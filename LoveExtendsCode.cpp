/**
In the Name of Allah
Author : Mizanur Rahman Hridu
Email  : hridu.hstu@gmail.com
Date   : 05-03-2021
**/

#include <bits/stdc++.h>
using namespace std;

void aboutList()
{
    // List
    list<int> mylist;

    mylist.push_back(10); //10
    mylist.push_back(15); //10, 15
    mylist.push_front(5); // 5, 10, 15  // can push front in list but not in vector
    mylist.erase(10);
    for (auto it : mylist)
        cout << it << " ";
    cout << endl;

    // Add elemet in any index

    list<int>::iterator it;
    it = mylist.begin(); // points the first element at index 0
    it++;                // point at index[1]

    // reverse the list
    mylist.reverse();
    for (auto it : mylist)
        cout << it << " ";
    cout << endl;
}

int main()

{
    aboutList();

    return 0;
}