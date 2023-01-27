#include<iostream>
using namespace std;
class profile
{
	public:
		int reg_no,sub1,sub2;
		string name,dept;
		void student1();
		void student2();
		void student3();
		void show1();
		void show2();
		void show3();
};
void profile::student1()
{
	cout<<"enter name of the student1:";
	cin>>name;
	cout<<"enter reg no of student1:";
	cin>>reg_no;
	cout<<"enter department of student1:";
	cin>>dept;
	cout<<"enter marks of student1:";
	cin>>sub1>>sub2;
}
void profile::student2()
{
	cout<<"enter name of the student2:";
	cin>>name;
	cout<<"enter reg no of student2:";
	cin>>reg_no;
	cout<<"enter department of student2:";
	cin>>dept;
	cout<<"enter marks of student2:";
	cin>>sub1>>sub2;
}
void profile::student3()
{
	cout<<"enter name of the student3:";
	cin>>name;
	cout<<"enter reg no of student3:";
	cin>>reg_no;
	cout<<"enter department of student3:";
	cin>>dept;
	cout<<"enter marks of student3:";
	cin>>sub1>>sub2;
}
void profile::show1()
{
	cout<<name<<"\n";
	cout<<reg_no<<"\n";
	cout<<dept<<"\n";
	cout<<sub1<<"\t"<<sub2;
}
void profile::show2()
{
	cout<<name<<"\n";
	cout<<reg_no<<"\n";
	cout<<dept<<"\n";
	cout<<sub1<<"\t"<<sub2;
}
void profile::show3()
{
	cout<<name<<"\n";
	cout<<reg_no<<"\n";
	cout<<dept<<"\n";
	cout<<sub1<<"\t"<<sub2;
}
main()
{
	profile p1,p2,p3;
	p1.student1();
	p2.student2();
	p3.student3();
	p1.show1();
	p2.show2();
	p3.show3();
	return 0;
	
}