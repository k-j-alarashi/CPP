#include<iostream>
using namespace std ;
main(){
	float num1 , num2 ;
	char ops ;
	cout<<"Enter First  Number : ";
	cin>>num1;
	cout<<"Enter Second Number : ";
	cin>>num2;
	cout<<"Enter The Operation You Want ( + ) , ( - ) , ( * ) , ( / ) : ";
	cin>>ops;
	switch(ops){
		case '+' :
			cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
			break;
		case '-' :
			cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
			break;
		case '*' :
			cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
			break;
		case '/' :
			cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
			break;
		default:
			cout<<"ERROR ..!";
	}
}