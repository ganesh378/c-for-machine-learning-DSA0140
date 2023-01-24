#include<iostream>
using namespace std;
main()
{
	int a,s=0,r,temp;
	cout<<"enter a number";
	cin>>a;
	temp=a;
	while(a!=0)
	{
		r=a%10;
		s=(s*10)+r;
		a=a/10;
	}
	if(temp==s)
	    cout<<"the number is palindrome";
	else
	    cout<<"the number is not palindrome";
}