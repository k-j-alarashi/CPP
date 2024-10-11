#include<iostream>
using namespace std ;
main(){
	int x , y ;
	cout<<"Enter The First  Number : ";
	cin>>x;
	cout<<"Enter The Second Number : ";
	cin>>y;
	string result = (x>y) ? "x is larger " : "y is larger";
	cout<<result;
}