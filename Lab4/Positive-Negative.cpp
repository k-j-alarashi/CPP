#include<iostream>
using namespace std ;
main(){
	int x ;
	cout<<"Enter the Number : ";
	cin>>x;
	if(x>0){
		cout<<"Positive";
	}
	else if(x<0){
		cout<<"Negative";
	}
	else{
		cout<<"Zero";
	}
}