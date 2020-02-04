#include <iostream>
#include <set>
#include<iterator>
using namespace std;
 int main()
{
    set<int>s;
    set<int>::iterator it;
    s.insert(10);
    s.insert(15);
    s.insert(1);
    it= s.find(15);
    s.erase(it);
    for(it = s.begin(); it!=s.end(); it++) {
        cout<< *it<<endl;
    }
return 0;
}
