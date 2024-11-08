#include<iostream>
using namespace std;

void myFunction(){
	cout<<"Hello World";
}

void printName(string name){
	cout<<"Your Name : "<<name<<endl;
}

int sum(int num1 , int num2){
	return num1+num2;
}

int power(int base , int exponent){
	int rs = 1;
	for(int i=1; i<=exponent; i++){
		rs = rs * base;
	}
	return rs ;
}
main(){
	int b , e ;
	cout<<"Enter Base : "<<endl;
	cin>>b;
	cout<<"Enter Exponent : "<<endl;
	cin>>e;
	cout<<"Result : "<<power(b,e)<<endl;
}