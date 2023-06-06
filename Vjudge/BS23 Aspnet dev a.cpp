/*

to solve the problem, we just need to count number of '1' in the given input. 
so, in the loop, i just needed to calculate the number of '1'.

time complexity is O(n) where n in the lenght of input string. 

*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, m, a, b, c, i, j, k, mx = 0, mn = 1e18;
    string s;
    cin>>s;
    for (i = 0; i < s.length(); i++){
        if(s[i]=='1') mx++;
    }
    cout<<mx<<endl;
    return 0;
}
