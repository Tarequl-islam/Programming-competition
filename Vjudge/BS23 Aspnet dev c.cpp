/*

to solve the problem, we need to count extravagance of the elephant which is |s|*c.
if it is maximum and its mass is less than or equal to moon's mass , we can save the elephant's name and extravagance.
so, in the loop, i just needed to calculate extravagance and compare if it is greatest and see if its mass is less than moon's mass.
if yes we we can save the elephant's name and extravagance. 

end of the loop see is there any elephant meets the criteria. is yes print the elephant name with "to the moom!". 
if there is no such elephant we print "dead meme :("

time complexity is O(n) where n is the number of elephant.

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, m, a, b, c, i, j, k, mx = 0, mass;
    string s;
    cin>>n>>mass;
    string ans="";
    ll cAns=0, mAns=0, extv = 0;
    for (i = 0; i < n; i++){
        cin>>s>>c>>m;
        if(s.length()*c > extv && m <= mass){
            ans = s;
            cAns = c;
            mAns = m;
            extv = s.length()*c;
        }
    }
    if(ans!="") cout<<ans<<" to the moon!"<<endl;
    else cout<<"dead meme :("<<endl;
    return 0;
}
