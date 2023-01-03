#include<iostream>
#include<vector>
using namespace std;
int maxone(vector<vector<int> > &v)
{
	int row=-1;
	int ones=0;
	int col=v[0].size();
	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			if(v[i][j]==1)
			{
			int	oness=col-j;
				
				if(oness>ones)
				{
					ones=oness;
					row=i;
				}
				
			}
		}
	}
	return row;
	
}
int main()
{
	int n,m;
	cout<<"enter the number of rows and columns in the 2d vector array"<<endl;
	cin>>n>>m;
	vector<vector<int> > vec(n,vector<int>(m));
	cout<<"enter only boolean digits in the 2d vector"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>vec[i][j];
		}
	}
	cout<<"the given  input 2d vector is"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<vec[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Calculating which row has more one digit"<<endl;
	int rowss=maxone(vec);
	if(rowss==-1)
	{
		cout<<"there are no on digit present in any row or column"<<endl;
		
	}
	else
	{
		cout<<rowss<<" has maximum number of ones"<<endl;
		
	}
	return 0;
}
