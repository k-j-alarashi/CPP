#include<iostream>
using namespace std ;
main(){
	int age ;
	cout<<"Enter Your Age : ";
	cin>>age;
	if(age<=18){
		if(age>=17){
			cout<<"Young";
		}
		else if(age>=6){
			cout<<"Child";
		}
		else {
			cout<<"Baby";
		}
	}
	else{
		cout<<"Adult";
	}	
}