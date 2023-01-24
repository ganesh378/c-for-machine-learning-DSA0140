#include<iostream>
using namespace std;
main()
{
	int n,s=0,r,temp=0;
	cout<<"enter a number";
	cin>>n;
	temp=n;
	while(n>0)
	{
		r=n%10;
		s=s+(r*r*r);
		n=n/10;
	}
	if(temp==s)
	    cout<<"the number is armstrong number";
	else
	    cout<<"the number is not armstrong number";
}