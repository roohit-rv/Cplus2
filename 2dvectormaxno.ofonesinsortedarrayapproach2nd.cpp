#include<iostream>
#include<vector>
using namespace std;

int leftmostone(vector<vector<int> > &vec)
{
	int j=vec[0].size()-1;
	int row=-1;
	int ones=0;
	for(int i=0;i<vec.size();i++)
	{
		while(j>=0&&vec[i][j]==1)
		{
			ones=j;
			row=i;
			j--;
		}
	}
	return row;
}
int main()
{
	int n,m;
	cout<<"enter the number of rows and columns for 2d vector"<<endl;
	cin>>n>>m;
	vector<vector<int> > v(n,vector<int>(m));
	cout<<"enter the elements of the 2d vector only in boolean digits"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>v[i][j];
		}
	}
	cout<<"the given vector is "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"calculating the row which has maximum number of one's digit"<<endl;
	int rows=leftmostone(v);
	if(rows==-1)
	{
		cout<<"there are no one's digit present in the 2d vector"<<endl;
	}
	else
	{
		cout<<rows<<" has the maximum number of one's digit"<<endl;
	}
	return 0;
}
