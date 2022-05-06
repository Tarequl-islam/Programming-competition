#include<bits/stdc++.h>
using namespace std;


int main(){ //s: 0.0 am - e: 0.00am;
    int t=1, cs = 1;
    cin >> t;
    while (t--){
        int n, m, a, b, c, i, j, k, mx = 0, mn = 1e18;
        //ll ar[100005];
        cin>>n>>m;
        cout<<"Case #"<<cs++<<": "<<endl;
        for (i = 0; i < 1+n*2; i++){
            for(j=0; j< m-1; j++){
                if(i==0 && j==0){
                    printf("..+");
                }
                else if(i==1 && j==0){
                    printf("..|");
                }
                else if(i%2==0 && j==0){
                    printf("+-+");
                }
                else if(j==0){
                    printf("|.|");
                }
                if(i%2 == 0)
                    printf("-+");
                else printf(".|");
            }
            printf("\n");
        }
        
    }
    return 0;
}
