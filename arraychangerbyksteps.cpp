#include<iostream>
using namespace std;
int main()
{
	int arr[5]={1,2,3,4,5};
	int k=3;
	int iter;
	cout<<"the array is"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<"peforming the operation the array"<<endl;
	if(k>5)
	{
		k=k%5;
	}
	int j=0;
	int newarr[5];
	for(int i=5-k;i<5;i++)
	{
		newarr[j]=arr[i];
		j++;
		
	}
	for(int i=0;i<5-k;i++)
	{
		newarr[j]=arr[i];
		j++;
	}
	cout<<"so our new array is "<<endl;
	for(int j=0;j<5;j++)
	{
		cout<<newarr[j]<<endl;
	}
}
