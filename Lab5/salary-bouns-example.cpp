#include<iostream>
using namespace std ;
main(){
	string name ;
	double salary ;
	cout<<"Enter Your Name   : ";
	cin>>name;
	cout<<"Enter Your Salary : ";
	cin>>salary;
	if(salary<=100000){
		salary = salary + (salary*0.05);
	}
	else{
		salary = salary + (salary*0.10);
	}
	cout<<"NAME		: "<<name<<endl;
	cout<<"SALARY   : "<<salary<<endl;
}