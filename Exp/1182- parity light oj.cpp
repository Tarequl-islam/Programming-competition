#include<iostream>
using namespace std;
int main(){
	long long int t, n, count;
	cin>>t;
	for (int c = 1; c <= t; c++) {

		cin>>n;
		count = 0;
		while(n>0){
			count += n % 2; //counting for how many 1
			n = n / 2;      // in the binary of given number.
		}
		if(count%2 == 1) {
			cout<<"Case "<<c<<": odd"<<endl;
		}
		else {
			cout<<"Case "<<c<<": even"<<endl;
		}

	}
}
