#include<iostream>
using namespace std;
main()
{
	int a[10],sum=0,m;
	cout<<"Enter the size of array"<<endl;
	cin>>m;
	cout<<"Enter the values of the array"<<endl;
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	for(int n=0;n<m;n++)
	{
		if(100>a[n]&&a[n]>9)
		{
			sum+=a[n];
		}
	}
	cout<<sum;
}
