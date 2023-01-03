#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	cout<<"enter 5 elements in the array"<<endl;
	for(int &ele:arr)
	{
		cin>>ele;
	}
	for(int elem:arr)
	{
		cout<<elem<<endl;
	}
	return 0;
}
