#include<iostream>
using namespace std;
int main()
{
	int n=3;
	int a[n][n];
	cout<<"enter the elements of 2d matrix"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"the given array in 2d matrix for is"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<" "<<a[i][j];
		}
		cout<<endl;
	}
	cout<<"performing the transpose operation on the given array"<<endl;
     int b[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			b[j][i]=a[i][j];
			
		}
		cout<<endl;
	}
	cout<<"the given array in 2d matrix for is"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<" "<<b[i][j];
		}
		cout<<endl;
		
	}
	return 0;
}
