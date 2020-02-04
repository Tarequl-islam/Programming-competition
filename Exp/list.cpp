#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> mlist;
    list<int>:: iterator it;
    for(int i=0; i<5; i++){
        mlist.push_back(i);
    }

    for(it=mlist.begin(); it!=mlist.end(); it++){
        cout<<*it<<" ";
    }
    mlist.reverse();
    cout<<"\n-------"<<endl;
    for(it=mlist.begin(); it!=mlist.end(); it++){
        cout<<*it<<" ";
    }
    return 0;
}
