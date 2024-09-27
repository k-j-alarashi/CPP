#include<iostream>
using namespace std ;
main(){
	string name ;
	int age ;
	float salary ;
	cout<<"Enter Your Name   : ";
	cin>>name;
	cout<<"Enter Your Age    : ";
	cin>>age;
	cout<<"Enter Your Salary : ";
	cin>>salary;
	float tax = 0.10; // 10/100 == 0.10
	salary = salary - (salary * tax);
	cout<<"==============================\n";
	cout<<"Your Name   : "<<name<<endl;
	cout<<"Your Age    : "<<age<<"\n";
	cout<<"Tax         : 10% "<<endl;
	cout<<"Main Salary : "<<salary<<endl;
}