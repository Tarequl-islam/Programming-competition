#include <iostream>
#include <map>
#include <iterator>
using namespace std;
int main()
{
    map<string, int> m;
    map<string, int>::iterator it;
    m["btom"]=23;
    m["cjack"]=20;
    m["amini"]=24;
    it=m.begin();
    for (it=m.begin(); it!=m.end(); it++)
    {
        cout<< it->first <<" "<< it->second<<endl;
    }
    return 0;
}
