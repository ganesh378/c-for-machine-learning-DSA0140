#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,a[10],k,m,n;
	cout<<"enter the no.of elements";
	cin>>k;
	for(i=0;i<k;i++)
	{
	cout<<"enter the numbers"<<i+1<<"=";
	cin>>a[i];
    }
    sort(a,a+i);
    cout<<"sorted array is=";
    for(i=0;i<k;i++)
    {
    	cout<<a[i]<<",";
	}
	cout<<"\n enter the nth minium number:";
	cin>>n;
	cout<<"\n enter the mth maximum number:";
	cin>>m;
	cout<<"\nthe "<<n<<"th minium number is:"<<(a[n-1]);
	cout<<"\nthe "<<m<<"th maximum number is:"<<a[k-m];
}