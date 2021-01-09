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
#define PI 2*acos(0.0)
#define M 998244353
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
ll GCD(ll a, ll b) { return (a % b) == 0 ? b : GCD(b, a % b); }
ll mod(ll x) { return ((x % M + M) % M); }
bool cmp(const pii &left, const pii &right){
    return left.first > right.first || (left.first == right.first && left.second < right.second);
}
string solv(string s){
    int m, a, b, c, i, j, k, kk, mx = 1, mn;
    string ss;
    while(mx==1){
        mx=0;
        for ( i = 0; i < s.length(); i++){
            if(s[i]=='^'){
                k=i+1;
                while(s[k]>='0' && s[k]<='9') k++;
                a=0;
                for ( j = 1; j <= k-i-1; j++){
                    a=a*pow(10, j-1)+(s[i+j]-'0');
                }
                kk=i-1;
                while(s[kk]>='0' && s[kk]<='9') kk--;
                b=0;
                for ( j = 1; j <= i-(kk+1); j++){
                    b+=pow(10, j-1)*(s[i-j]-'0');
                }
                ss=s.substr(0,kk+1) + to_string(int(pow(b,a))) + s.substr(k, s.length()-k);
                s=ss;
                mx=1;
            } 
        }
        for ( i = 0; i < s.length(); i++){
            if(s[i]=='/'){ 
                k=i+1;
                while(s[k]>='0' && s[k]<='9') k++;
                a=0;
                for ( j = 1; j <= k-i-1; j++){
                    a=a*pow(10, j-1)+(s[i+j]-'0');
                }
                kk=i-1;
                while(s[kk]>='0' && s[kk]<='9') kk--;
                b=0;
                for ( j = 1; j <= i-(kk+1); j++){
                    b+=pow(10, j-1)*(s[i-j]-'0');
                }
                ss=s.substr(0,kk+1) + to_string((int)(b/a)) + s.substr(k, s.length()-k);
                s=ss;
                mx=1;
            } 
        }
        for ( i = 0; i < s.length(); i++){
            if(s[i]=='*'){
                k=i+1;
                while(s[k]>='0' && s[k]<='9') k++;
                a=0;
                for ( j = 1; j <= k-i-1; j++){
                    a=a*pow(10, j-1)+(s[i+j]-'0');
                }
                kk=i-1;
                while(s[kk]>='0' && s[kk]<='9') kk--;
                b=0;
                for ( j = 1; j <= i-(kk+1); j++){
                    b+=pow(10, j-1)*(s[i-j]-'0');
                }
                ss=s.substr(0,kk+1) + to_string(b*a) + s.substr(k, s.length()-k);
                s=ss;
                mx=1;
            } 
        }
        for ( i = 0; i < s.length(); i++){
            if(s[i]=='%'){
                k=i+1;
                while(s[k]>='0' && s[k]<='9') k++;
                a=0;
                for ( j = 1; j <= k-i-1; j++){
                    a=a*pow(10, j-1)+(s[i+j]-'0');
                }
                kk=i-1;
                while(s[kk]>='0' && s[kk]<='9') kk--;
                b=0;
                for ( j = 1; j <= i-(kk+1); j++){
                    b+=pow(10, j-1)*(s[i-j]-'0');
                }
                ss=s.substr(0,kk+1) + to_string(b%a) + s.substr(k, s.length()-k);
                s=ss;
                mx=1;
            } 
        }
        for ( i = 0; i < s.length(); i++){
            if(s[i]=='-'){
                k=i+1;
                while(s[k]>='0' && s[k]<='9') k++;
                a=0;
                for ( j = 1; j <= k-i-1; j++){
                    a=a*pow(10, j-1)+(s[i+j]-'0');
                }
                kk=i-1;
                while(s[kk]>='0' && s[kk]<='9') kk--;
                b=0;
                for ( j = 1; j <= i-(kk+1); j++){
                    b+=pow(10, j-1)*(s[i-j]-'0');
                }
                ss=s.substr(0,kk+1) + to_string(b-a) + s.substr(k, s.length()-k);
                s=ss;
                mx=1;
            } 
        }
        for ( i = 0; i < s.length(); i++){
            if(s[i]=='+'){
                k=i+1;
                while(s[k]>='0' && s[k]<='9') k++;
                a=0;
                for ( j = 1; j <= k-i-1; j++){
                    a=a*pow(10, j-1)+(s[i+j]-'0');
                }
                kk=i-1;
                while(s[kk]>='0' && s[kk]<='9') kk--;
                b=0;
                for ( j = 1; j <= i-(kk+1); j++){
                    b += pow(10, j - 1) * (s[i - j] - '0');
                }
                ss=s.substr(0,kk+1) + to_string(b+a) + s.substr(k, s.length()-k);
                s=ss;
                mx=1;
            } 
        }
    }
    return ss;
}
int main(){
    string s, ss;
    int n, cs = 1;
    while (cin>>s){
        int i, j, k, mx = 1;
        for (int i = 0; i < s.length(); i++){
            if(s[i]=='('){
                k=i+1;
                while(s[k]!=')') k++;
                ss=s.substr(i+1, k-(i+1));
                ss = s.substr(0, i) + solv(s.substr(i+1, k-(i+1))) + s.substr(k +1, s.length()-(k+1));
                s=ss;
                i=k;
            }
        }
        ss = solv(s);
        cout<<"Test Case "<<cs++<<":"<<ss<<endl;
    }
    return 0;
}
