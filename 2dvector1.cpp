#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> vt;
	vt={1,2,3};
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	cout<<"enter 3 elements in vector 1"<<endl;
	int ele;
	for(int i=0;i<3;i++)
	{
		cin>>ele;
		v1.push_back(ele);
	}
	cout<<"enter 3 elements in vector 2"<<endl;
	for(int i=0;i<3;i++)
	{
		cin>>ele;
		v2.push_back(ele);
	}
	cout<<"enter 3 elements in vector 3"<<endl;
	for(int i=0;i<3;i++)
	{
		cin>>ele;
		v3.push_back(ele);
	}
	vector<vector<int> > v4;
	v4={v1,v2,v3};
	return 0;
	
}
