#include<iostream>
using namespace std;
int area(int,int);
int area(int);
float area(float);
float area(float,float);
main()
{
	int s,l,b;
	float r,bs,ht;
	cout<<"enter the side of a square:";
	cin>>s;
	cout<<"the area of square is"<<area(s);
	cout<<"\n enter length & breadth of rectangle:";
	cin>>l>>b;
	cout<<"\n the area of rectangle is"<<area(l,b);
	cout<<"\n enter the radius of circle:";
	cin>>r;
	cout<<"the area of circle is"<<area(r);
	cout<<"\n enter base & height of triangle:";
	cin>>bs>>ht;
	cout<<"the area of triangle is"<<area(bs,ht);
}
int area(int s)
{
	return(s*s);
}
int area(int l,int b)
{
	return(l*b);
}
float area(float r)
{
	return(3.14*r*r);
}
float area(float ht,float bs)
{
	return((bs*ht)/2);
}