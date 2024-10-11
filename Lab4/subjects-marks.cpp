#include<iostream>
using namespace std ;
main(){
	string name ;
	float s1, s2 , s3 ;
	cout<<"Enter Your Name : ";
	cin>>name;
	cout<<"Enter the marks of S1	: ";
	cin>>s1;
	cout<<"Enter the marks of S2	: ";
	cin>>s2;
	cout<<"Enter the marks of S3	: ";
	cin>>s3;
	float avg = (s1+s2+s3)/3;
	if(avg>=75){
		cout<<"Name : "<<name<<endl;
		cout<<"Average = "<<avg<<endl;
		cout<<"Passed ...";
	}
	else{
		cout<<"Name : "<<name<<endl;
		cout<<"Average = "<<avg<<endl;
		cout<<"Tru Again";
	}
}