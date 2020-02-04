#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int n, i, a[20];
    cin>>n;
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    sort (a,a+n);
    if (binary_search (a,a+n, 3))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";
    if (binary_search (a,a+n, 10))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";
    return 0;
}
