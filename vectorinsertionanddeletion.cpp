#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	cout<<"enter the elements of the vector"<<endl;
	for(int i=0;i<5;i++)
	{
		int element;
		cin>>element;
		v.push_back(element);
	}
	cout<<"printing the vector"<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
		
	}
	cout<<"inserting and printing some elements into the vector"<<endl;
	v.insert(v.begin()+2-1,69);
	v.insert(v.end()-1,6969);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
		
	}
	cout<<"deleting the extra elements inserted to the vector"<<endl;
	v.erase(v.begin()+2-1);
	v.erase(v.end()-2);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}
	return 0;
}
