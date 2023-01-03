#include<iostream>
using namespace std;
int main()
{
	int arr[5]={1,32,66,5,8};
	cout<<"the given array is"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
	int num;
	cout<<"enter the number that you want to find in the array is present or not"<<endl;
     cin>>num;
	int k=-1;
	for(int i=0;i<5;i++)
	{
		if(arr[i]==num)
		{
			k=i;
			break;
		}
	}
	cout<<k<<endl;
	return 0;
	
}
