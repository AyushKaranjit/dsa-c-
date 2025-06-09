#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	const int SEAT_A =15;
	const int SEAT_B =12;
	const int SEAT_C =9;
	double classA, classB, classC;
	cout<<"Enter a tickets sold for ClassA  :";
	cin>>classA;
	cout<<endl;
	cout<<"Enter a tickets sold for ClassB  :";
	cin>>classB;
	cout<<endl;
	cout<<"Enter a tickets sold for ClassC  :";
	cin>>classC;
	cout<<endl;
	double income = (classA*SEAT_A) + (classB*SEAT_B )+ (classC*SEAT_C);
	cout<<fixed<<showpoint<<setprecision(2);
	cout<<"Income is : $"<<income;
	return 0;
	
	
}
