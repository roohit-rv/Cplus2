#include<iostream>
using namespace std;
int main()
{
	int arr1[3]={1,2,3};
	int arr2[3]={4,5,6};
	int arr3[6];
	int index=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(arr1[i]<arr2[i])
			{
				arr3[index]=arr1[i];
			}
			else
			{
				arr3[index]=arr2[j];
			}
			index++;
			break;
		}
	}
	for(int i=0;i<6;i++)
	{
		cout<<arr3[i]<<" ";
	}
	return 0;
}
