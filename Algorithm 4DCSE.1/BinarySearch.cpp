#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll BSearch(ll A[], ll n, int x){
    ll i, j, m;
    i = 0;
    j=n-1;
    while(i<j){
        m = (i+j)/2;
        if(A[m]==x){
            return m;
        }
        if(x> A[m]) i = m+1;
        else j = m;
    }
    if(x==A[i]) return i;
    return 0;
}

int main(){
    ll out=3, n=10, A[10]= {1, 5, 8, 9, 6, 7, 3, 4, 2, 11};
    sort(A, A + 10);
    //for(int i=0; i<n; i++) cout<<A[i]<<" "<<endl;
    //out = BSearch(A, n, 4);

    while(out--){
        cin>>n;
        cout<<log(n)<<endl;
    }
    //cout << "\nElement found in the array in position: "<< out;
    //if ( binary_search (a, a + 10, 10))
    //  cout << "\nElement found in the array";
    //else
    //  cout << "\nElement not found in the array";
    return 0;
}
