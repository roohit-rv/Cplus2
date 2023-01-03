#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	cout<<"enter the elements of the vector"<<endl;
	for(int i=0;i<5;i++)
	{
		int ele;
		cin>>ele;
		v.push_back(ele);
		
	}
	cout<<"the given elements of the vector are"<<endl;
	int k;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
		
	}
	for(int i=0;i<v.size()-1;i++)
{
	if(v[i]<v[i+1])
	{
		k=0;
	}
	else
	{
		k=1;
		break;
	}
}
if(k==0)
{
	cout<<"the vector is sorted"<<endl;
	
}
else
{
	cout<<"the vector is not sorted"<<endl;
	
}
return 0;
}
