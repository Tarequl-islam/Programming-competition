#include<bits/stdc++.h>
using namespace std;
int main(){
    bitset<8> b(7);
    cout<<b<<endl;
    b.set(5);
    b.reset(1);
    cout<<b<<endl;
    b[3]=1;
    cout<<b<<endl;
    return 0;
}
