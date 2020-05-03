#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " "<<endl;
    }
    cout <<a<< endl;
} 