#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,m;
	cout<<"enter the number of rows and columns of 2d vector"<<endl;
	cin>>n>>m;
	vector<vector<int> > vec(n,vector<int>(m));
	cout<<"enter the elements ofthe 2d vector"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>vec[i][j];
		}
	}
	cout<<"the given 2d vector is"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<vec[i][j]<<" ";
		}
		cout<<endl;
	};
	int r1,c1,r2,c2;
	cout<<"enter the first co-ordinate of first row and first column"<<endl;
	cin>>r1>>c1;
	cout<<"enter the co-ordinate of the second row and second column"<<endl;
	cin>>r2>>c2;
	cout<<"the sum of the rectangle formed by given co-ordinates is"<<endl;
	int sum=0;
	for(int i=r1;i<=r2;i++)
	{
		for(int j=c1;j<=c2;j++)
		{
			sum=sum+vec[i][j];
		}
	}
	cout<<sum<<endl;
	return 0;
}
