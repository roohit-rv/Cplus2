#include<iostream>
using namespace std;
int main()
{
	int a[2][3];
	cout<<"enter the elements of 2d matrix"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"the given array in 2d matrix for is"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<" "<<a[i][j];
		}
		cout<<endl;
	}
	cout<<"performing the transpose operation on the given array"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<" "<<a[j][i];
			
		}
		cout<<endl;
	}
	return 0;
}
