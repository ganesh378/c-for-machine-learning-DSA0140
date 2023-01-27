using namespace std;
class sample
{
	public:
	    int reg,sub1,sub2;
	    string name,dept,informaton;
	    void info();
	    void information();
};
void sample::info()
{
	cout<<"enter reg no";
	cin>>reg;
	cout<<"enter sub1 and sub2 marks";
	cin>>sub1>>sub2;
	cout<<"enter name";
	cin>>name;
	cout<<"enter department name";
	cin>>dept;
}
void sample::information()
{
	cout<<reg<<endl;
	cout<<sub1<<endl;
	cout<<sub2<<endl;
	cout<<name<<endl;
	cout<<dept<<endl;
}
main()
{
	sample s1;
	s1.info();
	s1.information();
	return 0;
}