#include<iostream>
using namespace std;
int main()
{
	int a[3][3];
	cout<<"enter the elements of the matrix\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"the given matrix is\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<" "<<a[i][j];
		}
		cout<<endl;
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(a[i][j]==0)
			{
				for(int i=i;i<i+1;i++)
				{
					for(int j=0;j<3;j++)
					{
						a[i][j]=0;
					}
					
				}
				
				
			}
		}
		
	}
	cout<<"after changing required row and columns to zero the matrix is\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<" "<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
	
}
