#include<iostream>
using namespace std;
int main()
{
	int arr[8]={2,3,1,3,2,4,5,1};
	int k=0,num;
	for(int i=0;i<8;i++)
	{
		for(int j=i+1;j<8;j++)
		{
			if(arr[i]==arr[j])
			{
				if(arr[i]!=-1)
				{
					if(arr[j]!=-1)
					{
						arr[i]=-1;
				 arr[j]=-1;
					}
					
				}
				 
				 
			}
			
		}
	}
	cout<<"numbers that are not repeated twice are"<<endl;
	for(int i=0;i<8;i++)
	{
		if(arr[i]!=-1)
		{
			k=1;
			num=arr[i];
			cout<<num<<endl;
			
		}
	}
	if(k==0)
	{
		cout<<"are not present "<<endl;
	}
	return 0;
	
}
