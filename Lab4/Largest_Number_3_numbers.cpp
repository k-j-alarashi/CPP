#include<iostream>
using namespace std ;
main(){
	int x , y , z ;
	cout<<"Enter the First Number  : ";
	cin>>x;
	cout<<"Enter The Second Number : ";
	cin>>y;
	cout<<"Enter The Third Number  : ";
	cin>>z;
	if(x>y && x>z){
		cout<<"x = "<<x;
	}
	else if(y>x && y>z){
		cout<<"y = "<<y;
	}
	else if(z>x && z>y){
		cout<<"z = "<<z;
	}
	else {
		cout<<"Equals";
	}
	
}