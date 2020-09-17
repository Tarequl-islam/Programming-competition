#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, a, b, c, d;
    int ar[100005];
    map<int, vector<int>> m;
    map<int, int> mm;
    cin>>n;
    for (int i = 0; i < n; i++){
        scanf("%d", &ar[i]);
        m.insert(make_pair(ar[i], vector<int>()));
        m[ar[i]].push_back(i);
    }
    for (auto itt=m.begin(); itt != m.end(); itt++){
        a=-1;
        d=0;
        b = m[itt->first].size();
        if(b>2){
            for (int i = 1; i < b; i++){
                if (a == -1)
                    a = m[itt->first][i]- m[itt->first][i-1];
                else if (a != m[itt->first][i]- m[itt->first][i-1]){
                    d = 1;
                    break;
                }
            }
            if(d!=1) mm.insert(make_pair(itt->first, a));
        }
        else if(b==2) 
            mm.insert(make_pair(itt->first, m[itt->first][1]-m[itt->first][0]));
        else mm.insert(make_pair(itt->first, 0));
    }
    cout << mm.size() << endl;
    for(auto itt=mm.begin(); itt!=mm.end(); itt++)
        printf("%d %d\n", itt->first, itt->second);
    return 0;
}
