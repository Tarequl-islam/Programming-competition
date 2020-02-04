#include <iostream>
using namespace std;
int main() {
    int even[5],odd[5],x, i=0, j=0;
    for(int k=0; k<15; k++){
      cin>>x;
      if(x%2==0){
          even[i]=x;
          i++;
      }
      if(x%2!=0){
          odd[j]=x;
          j++;
      }
      if(i==5){
          for(int n=0; n<5; n++){
              cout<<"par["<<n<<"] = "<<even[n]<<endl;
              i=0;
          }
      }
      if(j==5){
          for(int n=0; n<5; n++){
              cout<<"impar["<<n<<"] = "<<odd[n]<<endl;
              j=0;
          }
      }
    }
    for(int n=0; n<j; n++){
        cout<<"impar["<<n<<"] = "<<odd[n]<<endl;
    }
    for(int n=0; n<i; n++){
        cout<<"par["<<n<<"] = "<<even[n]<<endl;
    }
    return 0;
}
