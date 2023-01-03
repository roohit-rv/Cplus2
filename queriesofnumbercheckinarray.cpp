#include<iostream>
using namespace std;
int main()
{
	cout<<"enter the number of queries "<<endl;
	int q;
	cin>>q;
	int qarr[q];
	cout<<"enter all the elements you want to check"<<endl;
	for(int i=0;i<q;i++)
	{
		cin>>qarr[i];
	}
	int arr[7]={1,2,3,4,5,6,7};
	for(int i=0;i<q;i++)
	{
		for(int j=0;j<7;j++)
		{
			if(qarr[i]==arr[j])
			{
				cout<<qarr[i]<<" is present in the array"<<endl;
			}
		}
	}
	return 0;
}
