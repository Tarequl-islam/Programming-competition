/*

to solve the problem, we need to find the hair that should be cut.
we know that exactly one hair will be cut, so we need to compare the desired lengths of the hairs with their current

so i iterate over the indices i from 0 to n-1 in initial hair to find the mismatch. if found save it.
and iterate over the indices i from 0 to n-1 in desired hair to find the mismatch. if found save it.

end of the program, we can print initial length and desired length.

time complexity is O(n) where n is the number of hair.

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, m, a, b, c, i, j, k, mx = 0, mass;
    cin>>n;
    ll ar[n+5], br[n+5], p[1005]={0}, q[1005]={0};
    for (i = 0; i < n; i++){
        cin >> ar[i];
        q[ar[i]]=1;
    }
    for (i = 0; i < n; i++){
        cin >> br[i];
        p[br[i]] = 1;
    }
    ll il, nl;
    for (i = 0; i < n; i++){
        if (p[ar[i]]==0){
            nl = ar[i];
            break;
        }
    }
    for (i = 0; i < n; i++){
        if (q[br[i]]==0){
            il = br[i];
            break;
        }
    }
    cout << il << " " << nl << endl;
    return 0;
}
