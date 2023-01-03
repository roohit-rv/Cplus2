#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	cout<<"enter the elements of the vector"<<endl;
	for(int i=0;i<6;i++)
	{
		int ele;
		cin>>ele;
		v.push_back(ele);
		
	}
	cout<<"the given vector is"<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
		
	}
	cout<<"the difference between the sum of elements at even indices to the sum of odd indices is "<<endl;
	int even=0,odd=0;
	for(int i=0;i<v.size();i++)
	{
		if(i%2==0)
		{
			even=even+v[i];
		}
		else
		{
			odd=odd+v[i];
		}
	}
	cout<<even-odd<<endl;
	return 0;
}
