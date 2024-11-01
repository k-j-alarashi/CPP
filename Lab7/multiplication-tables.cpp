#include<iostream>
using namespace std;
main(){
	for(int i=1; i<=12; i++){
		cout<<"Multiplication of ( "<<i<<" ) : "<<endl;
		for(int j=1; j<=12; j++){
			cout<<i<<" x "<<j<<" = "<<(i*j)<<endl;
		}
		cout<<"================================\n";
	}
}