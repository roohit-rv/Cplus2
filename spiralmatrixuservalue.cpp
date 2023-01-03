#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> > squarematrix(int a)
{
	vector<vector<int> > matrix(a,vector<int>(a));
	int top=0,bottom=a-1,left=0,right=a-1;
	int direction=0;
	int value=1;
	while(top<=bottom && left<=right)
	{
		if(direction==0)
		{
			for(int i=left;i<=right;i++)
			{
				matrix[top][i]=value++;
			}
			top++;
		}
		if(direction==1)
		{
			for(int i=top;i<=bottom;i++)
			{
				matrix[i][right]=value++;
			}
			right--;
		}
		if(direction==2)
		{
			for(int i=right;i>=left;i--)
			{
				matrix[bottom][i]=value++;
			}
			bottom--;
		}
		if(direction==3)
		{
			for(int i=bottom;i>=top;i--)
			{
				matrix[i][left]=value++;
			}
			left++;
		}
		direction=(direction+1)%4;
	}
	return matrix;
}
int main()
{
	int n;
	cout<<"enter the number of rows/columns of square matrix"<<endl;
	cin>>n;
	vector<vector<int> > vec(n,vector<int>(n));
	vec=squarematrix(n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<vec[i][j]<<" ";
		}
		cout<<endl;
		
	}
	return 0;
	
}
