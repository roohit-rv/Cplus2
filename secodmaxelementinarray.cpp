#include<iostream>
using namespace std;
int main()
{
	int arr[7]={2,3,5,7,6,7,1};
	int max=arr[0];
	for(int i=0;i<7;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	int secondmax=arr[0];
	for(int i=0;i<7;i++)
	{
		if(arr[i]>secondmax&&arr[i]<max)
		{
			secondmax=arr[i];
		}
	}
	cout<<"the second largest element in the array is "<<secondmax<<endl;
	return 0;
	
}
