#include<iostream>
using namespace std;
main(){
	int i=1 ;
	while(i<=12){
		cout<<"Multiplication of ( "<<i<<" ) : "<<endl;
		int j=1 ;
		while(j<=12){
			cout<<i<<" x "<<j<<" = "<<(i*j)<<endl;
			j++;
		}
		cout<<"================================\n";
		i++;
	}
}