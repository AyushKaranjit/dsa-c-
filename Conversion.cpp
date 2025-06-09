#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	const double YEN_PER_DOLLAR =83.14;
	const double EUROS_PER_DOLLAR =0.7337;
	double dollar;
	cout<<"Enter dollar amount";
	cin>>dollar;
	double dollarYen = dollar * YEN_PER_DOLLAR;
	double dollarEuros = dollar * EUROS_PER_DOLLAR;
	cout<<fixed<<showpoint<<setprecision(2);
	cout<<"The dollar amount in yen is  : ¥"<<dollarYen<<endl<<"The dollar amount in euro is : £"<<dollarEuros;
	return 0;
}
