#include <iostream>
#include <list>
#include<iterator>
using namespace std;
 int main()
{
    list<float> mylist;
    list<float>::iterator it;
    mylist.push_back(10);
    mylist.push_back(15);
    mylist.push_front(5);
    mylist.push_front(0);
    mylist.push_back(-2);
    for(it = mylist.begin(); it!=mylist.end(); it++)
    {
        cout<< *it<<endl;
    }
    return 0;
}
