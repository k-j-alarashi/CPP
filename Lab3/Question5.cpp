#include<iostream>
using namespace std;
main(){
	int time ;
	cout<<"Enter Time by Seconds : ";
	cin>>time;
	int hour = time/3600 ;
	int minute = (time%3600)/60;
	int second = time%60;
	cout<<hour<<" h :  "<<minute<<" m :  "<<second<<" s ";
}