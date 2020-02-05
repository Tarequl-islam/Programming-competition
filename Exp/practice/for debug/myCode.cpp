#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        bool v=false;
        cin>>x;
        if(x < 2){
            cout << "Not Prime" << endl;
        }
        else if(x == 2){
            cout << "Prime" << endl;
        }
        else{
            if(x % 2 == 0){
                cout << "Not Prime" << endl;
            }
            else{
                for (int j = 3; j*j <= x; j += 2){
                    if(x % j == 0){
                        cout << "Not Prime" << endl;
                        v=true;
                        break;
                    }
                }
                if(v==false) cout << "Prime" << endl;
            }
        }
    }
    return 0;
}
