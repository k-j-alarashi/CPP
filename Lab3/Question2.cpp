#include<iostream>
using namespace std;
main(){
	float hour ;
	cout<<"Enter Hours to Convert into Seconds : ";
	cin>>hour;
	float result = hour * 60 * 60 ;
	cout<<hour<<" Hour = "<<result<<" Seconds ";
}