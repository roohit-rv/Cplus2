#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> vector1;
	int element;
	cout<<"enter the element of vector 1"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>element;
		vector1.push_back(element);
	
	}
	for(int ele:vector1)
	{
		cout<<ele<<endl;
	}
	
	return 0;
}
