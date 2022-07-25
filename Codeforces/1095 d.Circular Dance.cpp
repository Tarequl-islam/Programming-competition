#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
bool cmp(const pii &l,const pii &r) {
    return l.first < r.first;
}
int n;
vector<vector<int>> a;

void check(int l, int r){
    vector<int> ans;
    for (int i = 0; i < n; ++i){
        int nxt = -1;
        if (a[l][0] == r){
            nxt = a[l][1];
        }
        else if (a[l][1] == r){
            nxt = a[l][0];
        }
        else{
            return;
        }
        ans.push_back(nxt);
        l = r;
        r = nxt;
    }
    for (auto it : ans){
        cout << it + 1 << " ";
    }
    cout << endl;
    exit(0);
}

int main() // s: 10.54 am - e: 0.00am;
{
    cin >> n;
    a = vector<vector<int>>(n, vector<int>(2));
    for (int i = 0; i < n; ++i){
        cin >> a[i][0] >> a[i][1];
        --a[i][0];
        --a[i][1];
    }
    check(0, a[0][0]);
    check(0, a[0][1]);
    return 0;
}