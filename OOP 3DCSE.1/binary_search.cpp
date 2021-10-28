#include<iostream>
#include <set>
#include<algorithm>
using namespace std;
int main(){
    int a[10]= {1, 5, 8, 9, 6, 7, 3, 4, 2, 11};
    sort(a, a + 10);
if ( binary_search (a, a + 10, 2))
cout << "\nElement found in the array";
else
cout << "\nElement not found in the array";
if ( binary_search (a, a + 10, 10))
cout << "\nElement found in the array";
else
cout << "\nElement not found in the array";
    return 0;
}
