#include <iostream>
using namespace std;
void converter()
{
	int n;
	double a;
	cout<<"Enter the choice \n1. Celcius to Fahrenheit \n2. Fahrenheit to Celcius"<< endl;
	cin>>n;
	if(n==1)
	{
		cout<<"Enter temperature in Celcius"<<endl;
		cin>>a;
		cout<<"Temperature in Fahrenheit is "<<(((9.0/5.0)*a)+32)<<endl;
	}
	else if(n==2)
	{
		cout<<"Enter temperature in Fahrenheit"<<endl;
		cin>>a;
		cout<<"Temperature in Celcius is "<<((a-32)*(5.0/9.0))<<endl;
	}
}
int main()
{
	int c=1;
	while(c==1)
	{
		converter();
		cout<<"Press 1 to continue or 0 to exit"<<endl;
		cin>>c;
	}
	return 0;
}