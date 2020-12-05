#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
bool cmp(const pii &left, const pii &right){
    return left.first > right.first || (left.first == right.first && left.second < right.second);
}
int main(){
    int t, cs = 1;
    cin >> t;
    while (t--){
        int n, m, a, b, c, i, j, mx = 0, mn = 2222222;
        string s;
        vpii v;
        cin>>a>>b>>c;
        cin>>s;
        if(a>c && b>c){
            cout<<s.length()<<endl;
            continue;
        }
        j = s.length()-2;
        for (i = j; i >=0; i--){
            if(s[i]=='A'){
                if(a>c){
                    break;
                }
                while (i >= 0 && s [i] == 'A'){
                    i--;
                }
                c-=a;
            }
            else{
                if(b>c){
                    break;
                }
                while (i >= 0 && s[i] == 'B'){
                    i--;
                }
                c-=b;
            }
            i++;
        }
        cout <<i+2<< endl;
    }
    return 0;
}
