#include<iostream>
#include<vector>
using namespace std;
void spiralmatrix(vector<vector<int> > &matrix)
{
	int top=0;
   int left=0;
	int bottom=matrix.size()-1;
	int right=matrix[0].size()-1;
	int direction=0;
	while(top<=bottom && left<=right)
	{
		if(direction==0)
		{
			for(int col=left;col<=right;col++)
			{
				cout<<matrix[top][col]<<" ";
			}
			top++;
			
		}
	   else	if(direction==1)
		{
			for(int row=top;row<=bottom;row++)
			{
				cout<<matrix[row][right]<<" ";
			}
			right--;
		}
	   else	if(direction==2)
		{
			for(int col=right;col>=left;col--)
			{
				cout<<matrix[bottom][col]<<" ";
			}
			bottom--;
		}
		else if(direction==3)
		{
			for(int row=bottom;row>=top;row--)
			{
				cout<<matrix[row][left]<<" ";
			}
			left++;
		}
		direction=(direction+1)%4;
	}
}
int main()
{
	int n,m;
	cout<<"enter the number of rows and columns of 2d vector"<<endl;
	cin>>n>>m;
	vector<vector<int> >vec(n,vector<int>(m));
	cout<<"enter the elements of 3d vector"<<endl;
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
			cout<<vec[i][j]<<"   ";
		}
		cout<<endl;
		
	}
	cout<<"printing the 2d vector in spiral matrix"<<endl;
	spiralmatrix(vec);
	return 0;
}
