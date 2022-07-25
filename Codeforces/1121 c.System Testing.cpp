#include <bits/stdc++.h>
#define f first
#define s second
#define pb push_back
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int maxk = 100 + 17;
const int maxn = 2e5 + 17;
 


int N, K;
int in[maxn];
int tp[maxn];
bool ans[maxn];
 
int main(){
    cin >> N >> K;
    for (int i = 1; i <= N; i++) cin >> in[i];
    queue<int> q;
    for (int i = 1; i <= K; i++) q.push(i);
 
    int it = K + 1, fn = 0;
    while (!q.empty()) {
        int sz = q.size();
        int prc = round(100.0 * fn / N);
 
        while (sz--) {
            int x = q.front(); q.pop();
            ans[x] |= ++tp[x] == prc;
            if (tp[x] < in[x]) q.push(x);
            else {
                fn++;
                if (it <= N) q.push(it++);
            }
        }
    }
    int ret = 0;
    for (int i = 1; i <= N; i++) ret += ans[i];
    cout << ret << endl;
    return 0;
}