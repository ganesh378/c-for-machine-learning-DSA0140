#include<iostream>
using namespace std;
main()
{
	int a,b,c,n;
	cout<<"enter two numbers:";
	cin>>a>>b;
	cout<<"\n 1.addition 2.subtraction 3.divison 4.multiplication";
	cout<<"\n enter a choice:";
	cin>>n;
	switch(n)
	{
		case 1:
			c=a+b;
			cout<<"the addition is:"<<c;
		break;
		case 2:
			c=a-b;
		    cout<<"the subtraction is:"<<c;
		break;
		case 3:
			c=a%b;
		    cout<<"the division is:"<<c;
		break;
		case 4:
			c=a*b;
			cout<<"the multiplication is:"<<c;
	}
}