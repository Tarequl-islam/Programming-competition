#include<bits/stdc++.h>
using namespace std;
int main(){
    string l;
    while(getline(cin, l))
    {
    //getline(cin, l);
    stack<char> s;
    for (int i = 0; i < l.length(); ++i)
    {
        if(l[i] == '(')
            s.push(i);
        if(l[i] == ')'){
            if(!s.empty()){
                s.pop();
            }else{
                s.push(i);
            }
        }

    }
    if(s.empty()){
        cout << "correct" << endl;
    }else{
    cout << "incorrect" << endl;
    }
    }
    return 0;
}
