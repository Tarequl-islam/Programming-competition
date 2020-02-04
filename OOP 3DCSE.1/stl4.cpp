#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector<int> vec;
    int i;
    cout<<"vector size = "<<vec.size()<<endl;
    for(i = 0; i < 5; i++){
        vec.push_back(i);
    }
    cout<<"extended vector size = "<<vec.size()<<endl;
    for(i = 0; i < 5; i++){
        cout << "value of vec "<<i<<"= "<<vec[i]<<endl;
    }
        // use iterator to access the values
    vector<int>::iterator v = vec.begin();
    while( v != vec.end()){
        cout << "value of v = " << *v << endl;
        v++;
    }
    return 0;
 }
