#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double a,b,c,d,e;
	cout<<"ENTER a  test scores :";
	cin>>a>>b>>c>>d>>e;
	double avg = (a+b+c+d+e)/5;
	cout<<fixed<<showpoint<<setprecision(1);
	cout<<"The avg of your test score is : "<<avg;
}
