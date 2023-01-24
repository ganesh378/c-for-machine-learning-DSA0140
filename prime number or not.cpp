#include<iostream>
using namespace std;
main()
{
	int a,i,b=0;
	cout<<"enter a number";
	cin>>a;
	for(i=2;i<=a;i++)
	{
		if(a%i==0)
		{
			b++;
		}
	}
	if(b==2)
	    cout<<"the number is a prime number";
	else
	    cout<<"the number is not a prime number";
}