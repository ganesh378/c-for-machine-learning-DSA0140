#include<iostream>
using namespace std;
class reverse
{
	public:
		int n,rev,r;
		void reversed();
};
void reverse::reversed()
{
	cout<<"enter a number";
	cin>>n;
	while(n!=0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	}
	cout<<"the reversed number is:"<<rev;
}
main()
{
	reverse r1;
	r1.reversed();
	return 0;
}