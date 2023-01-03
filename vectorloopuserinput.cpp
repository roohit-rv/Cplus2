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
	cout<<"enter the element of vector 2 "<<endl;
	
	vector<int> vector2(5);
	for(int i=0;i<5;i++)
	{
		cin>>vector2[i];
	}
	cout<<"elements of vector 1 are"<<endl;
	for(int i=0;i<vector1.size();i++)
	{
		cout<<vector1[i]<<endl;
	}
	cout<<"element of vector 2 are"<<endl;
	for(int i=0;i<vector2.size();i++)
	{
		cout<<vector2[i]<<endl;
	}
	return 0;
}
