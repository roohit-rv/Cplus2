#include<iostream>
#include<vector>
using namespace std;
int sumofrec(vector<vector<int> >&matrix, int row, int column, int row1, int col1, int row2, int col2 )
{
	cout<<"the prefix sum of the given 2d vector in the form of row wise is"<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=1;j<column;j++)
		{
			matrix[i][j]+=matrix[i][j-1];
		}
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	int summed=0;
	for(int i=row1;i<=row2;i++)
	{
		if(col1!=0)
		{
		
		summed+=matrix[i][col2]-matrix[i][col1-1];	
		}
		else
		{
			summed+=matrix[i][col2];
		}
	}
	return summed;
}
int main()
{
	int n,m;
	cout<<"enter the number of rows and columns of 2d vector"<<endl;
	cin>>n>>m;
	vector<vector<int> > vec(n,vector<int>(m));
	cout<<"enter the elements of the 2d vector"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>vec[i][j];
		}
	}
	cout<<"the given 2d vector is "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<vec[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"enter the co-ordinates of first row and first column"<<endl;
	int l1,r1;
	cin>>l1>>r1;
	cout<<"enter the co-ordinates of the second row and second column"<<endl;
	int l2,r2;
	cin>>l2>>r2;
	int sum;
	sum=sumofrec(vec,n,m,l1,r1,l2,r2);
	cout<<"the sum of the rectangle or square formed by the co-ordinates given is"<<endl;
	cout<<sum<<endl;
	return 0;
	
}
