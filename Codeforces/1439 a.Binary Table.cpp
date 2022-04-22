#include <bits/stdc++.h>
#define pb push_back

using namespace std;

char c[200][200];
bool cnt[200][200];

struct node {int x1, y1, x2, y2, x3, y3;} p[5];
vector <node> v;

void upd(int x, int y, int tp, bool is) {
    if(is)
        v.pb({x + p[tp].x1, y + p[tp].y1, x + p[tp].x2, y + p[tp].y2, x + p[tp].x3, y + p[tp].y3});
    else 
        cnt[x + p[tp].x1][y + p[tp].y1] ^= 1, cnt[x + p[tp].x2][y + p[tp].y2] ^= 1, cnt[x + p[tp].x3][y + p[tp].y3] ^= 1;
}

void solve() {
	int n, m, od = 0;
	v.clear();
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			cin >> c[i][j];
			if(c[i][j] == '1')
				od++, cnt[i][j] = true;
			else
			    cnt[i][j] = false;
		}
	}
	if(od == 0) {
		cout << 0 << endl;
		return;
	}
	if(n == 1 || m == 1) {
		cout << -1 << endl;
		return;
	}
    for(int i = 1; i <= n - 2; i++) {
		for(int j = 1; j <= m; j++) {
			if(cnt[i][j]) {
			    if(j != m) {
			        v.pb({i, j, i + 1, j, i + 1, j + 1});
			        cnt[i][j] ^= 1, cnt[i + 1][j] ^= 1, cnt[i + 1][j + 1] ^= 1;
			    } 
			    else {
			        v.pb({i, j, i + 1, j, i + 1, j - 1});
			        cnt[i][j] ^= 1, cnt[i + 1][j] ^= 1, cnt[i + 1][j - 1] ^= 1;
			    }
			}
		}
	}
	for(int i = 1; i <= m - 2; i++) {
	    if(cnt[n - 1][i]) {
	        v.pb({n - 1, i, n - 1, i + 1, n, i + 1});
	        cnt[n - 1][i] ^= 1, cnt[n - 1][i + 1] ^= 1, cnt[n][i + 1] ^= 1; 
	    }
	    if(cnt[n][i]) {
	        v.pb({n, i, n - 1, i + 1, n, i + 1});
	        cnt[n][i] ^= 1, cnt[n - 1][i + 1] ^= 1, cnt[n][i + 1] ^= 1; 
	    }
	}
	for(int msk = 0; msk < (1 << 4); msk++) {
	    for(int j = 0; j < 4; j++) 
	       if(msk & (1 << j))
	           upd(n - 1, m - 1, j, 0);
	    if(!cnt[n - 1][m - 1] && !cnt[n - 1][m] && !cnt[n][m - 1] && !cnt[n][m]) {
	        for(int j = 0; j < 4; j++) 
	            if(msk & (1 << j))
	                upd(n - 1, m - 1, j, 1);
	        break;
	    }
	    for(int j = 0; j < 4; j++)
	        if(msk & (1 << j))
	            upd(n - 1, m - 1, j, 0);
	}
	cout << (int)v.size() << endl;
	for(auto u : v)
        cout << u.x1 << " " << u.y1 << " " << u.x2 << " " << u.y2 << " " << u.x3 << " " << u.y3 << endl;
}

int32_t main(){
    p[0] = {0, 0, 0, 1, 1, 0}, p[1] = {0, 1, 0, 0, 1, 1}, p[2] = {1, 0, 1, 1, 0, 0}, p[3] = {1, 1, 0, 1, 1, 0};
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}