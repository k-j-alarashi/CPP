#include<iostream>
using namespace std ;
main(){
	int id , age ;
	string name ;
	for(int i=1 ; i<=3 ; i++){
		cout<<"Enter ID : ";
		cin>>id;
		cout<<"Enter Name : ";
		cin>>name;
		cout<<"Enter Age  : ";
		cin>>age;
		cout<<"\n\n===== STUDENT'S DATA ( "<<i<<" ) =====\n\n";
		cout<<"ID          : "<<id<<endl;
		cout<<"NAME        : "<<name<<endl;
		cout<<"AGE         : "<<age<<endl;
		cout<<"\n=================================\n\n";
	}
}