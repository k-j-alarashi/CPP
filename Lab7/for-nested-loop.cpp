#include<iostream>
using namespace std;
main(){
	for(int i=1 ; i<=5 ; i++){
		cout<<"\n outer loop : "<<i<<endl;
		for(int j=1 ; j<=3 ; j++){
			cout<<" 	inner loop : "<<j<<endl;
		}
	}
}