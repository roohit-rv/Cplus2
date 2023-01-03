#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotatevector(vector<vector<int> > &vec, int m)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<i;j++)
		{
			swap(vec[i][j],vec[j][i]);
		}
	}
	for(int i=0;i<m;i++)
	{
		reverse(vec[i].begin(),vec[i].end());
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<vec[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cout<<"enter the number of rows/column of 2d square vector"<<endl;
	cin>>n;
	vector<vector<int> > v(n,vector<int>(n));
	cout<<"enter the elements of the 2d square vector"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>v[i][j];
		}
	}
	cout<<"the 2d square vector is"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
		
	}
	cout<<"rotating the given 2d square vector by 90 degrees"<<endl;
	rotatevector(v,n);
	return 0;
}
