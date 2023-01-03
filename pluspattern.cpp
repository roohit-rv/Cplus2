#include<iostream>
using namespace std;
int main()
{
	int n=5;
	for(int i=1;i<=n;i++)
	{
		if(i==(n/2)+1)
		{
			for(int k=1;k<=n;k++)
			{
				cout<<"*";
			}
			
		}
		else
			{
				for(int sp=1;sp<(n/2)+1;sp++)
				{
					cout<<" ";
				}
				cout<<"*";
			}
			cout<<endl;
	}
	return 0;
	
}
