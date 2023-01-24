#include<iostream>
using namespace std;
main()
{
	int a=0,b=1,c=0,n,i;
	cout<<"enter no of values to be printed";
	cin>>n;
	cout<<a;
	cout<<","<<b;
	for(i=1;i<=n;i++)
	{
	   c=a+b;
	   a=b;
	   b=c;
	   
	   cout<<","<<c;
    }
}