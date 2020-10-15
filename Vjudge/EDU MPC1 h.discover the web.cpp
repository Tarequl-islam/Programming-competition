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
int main(){
    int t, cs=1;
    cin>>t;
    while (t--){
        int a, b, c=0;
        stack<string> forwardd;
        stack<string> backwardd;
        queue<string> q;
        string s, current = "http://www.lightoj.com/";
        while (1){
            cin >> s;
            if(s=="VISIT"){
                backwardd.push(current);
                cin>>s;
                current = s;
                q.push(current);
                while (!forwardd.empty()){
                    forwardd.pop();
                }
            }
            else if (s=="QUIT")
                break;
            else if(s=="BACK"){
                if(backwardd.empty()){ 
                    q.push("Ignored");
                }
                else{
                    forwardd.push(current);
                    current=backwardd.top();
                    q.push(current);
                    backwardd.pop();
                }
            }
            else if (s=="FORWARD"){
                if(forwardd.empty()){ 
                    q.push("Ignored");
                }
                else{
                    backwardd.push(current);
                    current=forwardd.top();
                    q.push(current);
                    forwardd.pop();
                }
            }
        }
        cout<<"Case "<<cs++<<":\n";
        while (!q.empty()){
            cout <<q.front()<<endl;
            q.pop();
        }
    }
    return 0;
}
