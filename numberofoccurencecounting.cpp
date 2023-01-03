#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	cout<<"enter the elements in the vector"<<endl;
	for(int i=0;i<9;i++)
	{
		int element;
		cin>>element;
		v.push_back(element);
	}
	cout<<"given vector is"<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}
	
	cout<<"the last occurence of 1 is"<<endl;
	int count=0;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]==1)
		{
			count++;
		}
		
	}
	cout<<count<<endl;
	return 0;
	
}
