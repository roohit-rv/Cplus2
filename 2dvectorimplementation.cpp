#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,m,k=1;
	cout<<"enter the number of rows and columns in the pascal triangle"<<endl;
	cin>>n>>m;
	vector<vector<int> > v(n, vector<int>(m));
	cout<<"enter the elements of 2d vector"<<endl;
	for(int i=0;i<v.size();i++)
	{
		v[i].resize(i+1);
		for(int j=0;j<i+1;j++)
		{
			cin>>v[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
		cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
