#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x,y, sum;
        cin>>x>>y;
        for(int j=0; j<y; j++){
            if(x%2!=0){
                sum+=x;
            }
            x++;
        }
    }
    return 0;
}
