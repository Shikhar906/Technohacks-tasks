#include<iostream>
using namespace std;
void calc()
{
	int n;
	double a, b;
	cout<<"Enter the choice \n1. Addition \n2. Subtraction \n3. Division \n4. Multiplication"<< endl;
	cin>>n;
	if(n==1)
	{
		cout<<"Enter two numbers"<<endl;
		cin>>a>>b;
		cout<<"Sum is "<<(a+b)<<endl;
	}
	else if(n==2)
	{
		cout<<"Enter two numbers"<<endl;
		cin>>a>>b;
		cout<<"Difference is "<<(a-b)<<endl;
	}
	else if(n==3)
	{
		cout<<"Enter two numbers"<<endl;
		cin>>a>>b;
		cout<<"Quotient is "<<(a/b)<<endl;
	}
	else if(n==4)
	{
		cout<<"Enter two numbers"<<endl;
		cin>>a>>b;
		cout<<"Product is "<<(a*b)<<endl;
	}
	else
		cout<<"Error!!"<<endl;
}
int main()
{
	int c=1;
	while(c==1)
	{
		calc();
		cout<<"Press 1 to continue or 0 to exit"<<endl;
		cin>>c;
	}
}