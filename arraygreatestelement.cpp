#include<iostream>
using namespace std;
int main()
{
	int arr[6]={1,4,3,6,2,7};
	cout<<"the given array is"<<endl;
	for(int i=0;i<6;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<"the greatest element in the array is "<<endl;
	int grt=0;
	for(int i=0;i<6;i++)
	{
		if(arr[i]>grt)
		{
			grt=arr[i];
		}
	}
	cout<<grt<<endl;
	return 0;
}
