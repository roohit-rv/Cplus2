#include<iostream>
#include<vector>
using namespace std;
int sumofrec(vector<vector<int> > &matrix,int row,int column,int row1,int col1, int row2, int col2)
{
	for(int i=0;i<row;i++)
	{
		for(int j=1;j<column;j++)
		{
			matrix[i][j]+=matrix[i][j-1];
		}
	}
	for(int i=1;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			matrix[i][j]+=matrix[i-1][j];
		}
	}
	cout<<"the prefix sum of the 2d vector both rwo and clumn wise is given below"<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	int topsum=0, leftsum=0, topleftsum=0;
	if(row1!=0)
	{
		topsum=matrix[row1-1][col2];
	}
	if(col1!=0)
	{
		leftsum=matrix[row2][col1-1];
	}
	if(row1!=0 && col1!=0)
	{
		topleftsum=matrix[row1-1][col1-1];
	}
	int summed;
	summed=matrix[row2][col2]-topsum-leftsum+topleftsum;
	return summed;
}
int main()
{
	int n,m;
	cout<<"enter the number of rows and columns of 2d vector"<<endl;
	cin>>n>>m;
	cout<<"enter the elements of 2d vector"<<endl;
	vector<vector<int> > vec(n,vector<int>(m));
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
		
		
	}
	cout<<"enter the co-ordinates of first row and frst column"<<endl;
	int r1,c1;
	cin>>r1>>c1;
	cout<<"enter the co-ordinates of second row and second column"<<endl;
	int r2,c2;
	cin>>r2>>c2;
	int sum;
	sum=sumofrec(vec,n,m,r1,c1,r2,c2);
	cout<<"the sum of rectangle co-ordinates given"<<endl;
	cout<<sum<<endl;
	return 0;
	
}
