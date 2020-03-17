#include<bits/stdc++.h>
#define ll long long
using namespace std;
int i, n, a, b, c, d, temp;
int *m;
int main(void){
    scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);
    m = new int[n+1];
    for(i = 1; i <= n; i++) m[i] = i;
    for(; a < b; a++, b--)
        swap(m[a],m[b]);
    for(; c < d; c++, d--)
        swap(m[c],m[d]);
    printf("%d",m[1]);
    for(i = 2; i <= n; i++) printf(" %d",m[i]);
    printf("\n");
    delete[] m;
    return 0;
}
