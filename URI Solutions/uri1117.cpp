#include<iostream>
#include<iomanip>
using namespace std;
int main(){
        float b=-1;
            for(int j=1; j<=1000; j++){
                float a;
                cin>>a;
                if(a>=0 && a<=10 && b<0){
                    b=a;
                }
                else if(a>=0 && a<=10 && b>=0){
                    cout<<fixed<<setprecision(2)<<"media = "<<(float)(a+b)/2<<endl;
                    for(int i=1; i<=1000; i++){
                        int n;
                        cout<<"novo calculo (1-sim 2-nao)"<<endl;
                        cin>>n;
                        if(n == 2){
                            return 0;
                        }
                        if(n == 1){
                            main();
                        }
                    }
                }
                else cout<<"nota invalida"<<endl;
            }
    return 0;
}
