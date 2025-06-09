#include<iostream>
using namespace std;

int main(){
	double celsius, farenheit;
	cout<<"Enter a celsius : ";
	cin>>celsius;
	
	farenheit = (9/5.0) * celsius + 32; 
	cout<<"The temprature is farenheit is : " <<farenheit<<endl;
	return 0;
}
