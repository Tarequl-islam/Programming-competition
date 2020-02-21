#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
int main(){
    int casee=1;
    while(1){
        int n, q, x,y, ar[10000], qar[10000];
        cin>>n>>q;
        if(n==0 && q==0) break;
        for (int i = 0; i < n; ++i) cin>>ar[i];
        for (int i = 0; i < q; ++i) cin>>qar[i];
        sort(ar, ar+n);
        cout<<"CASE# "<<casee<<":\n";
        for (int i = 0; i < q; ++i){
            x=qar[i];
            y = binarySearch(ar, 0, n-1, x);
            while(ar[y]==ar[y-1]) y--;
            if(y==-1) cout<<x<<" not found\n";
            else cout<<x<<" found at "<<y+1<<endl;
        }
        casee++;
    }
    return 0;
}
