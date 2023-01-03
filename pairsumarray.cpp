#include<iostream>
using namespace std;
int main()
{
	int a[5]={3,4,6,7,1};
	int count=0;
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(a[i]+a[j]==7)
			{
				count++;
			}
		}
	}
	cout<<"there are "<<count<<" pair available whose sum is 7"<<endl;
	return 0;
}
