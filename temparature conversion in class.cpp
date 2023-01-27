//declare class celsisus & use a function to get data farenheit to get the farenhrit degree and print the celsius value
#include<iostream>
using namespace std;
class celsius
{
	public:
		int c,f;
		void farenheit();
};
void celsius::farenheit()
{
	cout<<"enter the temperature in farenheit";
	cin>>f;
	c=((f-32)*5)/9;
	cout<<"the temperature celsius is"<<c;
}
main()
{
	celsius c1;
	c1.farenheit();
	return 0;
}