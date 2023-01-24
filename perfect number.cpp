#include<iostream>
using namespace std;
main()
{
	int a,i=1,sum=0;
	cout<<"enter a number";
	cin>>a;
	while(i<a)
	{
		if(a%i==0)
	    sum=sum+i;
	    i++;
	}
	if(sum==a)
	cout<<"the number is a perfect number";
	else
	cout<<"the number is not a perfect number";
}