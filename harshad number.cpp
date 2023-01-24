#include<iostream>
using namespace std;
main() 
{
	int n,sum=0,r,temp;                
    cout<<"enter a number";
    cin>>n;                      
    temp=n;                        
    while(n!=0) 
    {
    	r=n%10;
		sum=sum+r;        
        n=n/10; 
	}
    if((temp%sum)==0) 
        cout<<"Yes the number is harshad number"; 
    else
        cout<<"No number is not harshad nnumber";  
}