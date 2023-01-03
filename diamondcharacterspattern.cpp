#include<iostream>
using namespace std;
int main()
{
	int n=5;
	for(int line=1;line<=n;line++)
	{
	
		
			for(int k=0;k<n-line;k++)
			{
				cout<<" ";
			}
		
		int charac=2*line-1;
		for(int j=0;j<charac;j++)
		{
			char ch=('A'+j);
			cout<<ch;
		}
		cout<<endl;
	}
	for(int line=n+1;line<line-n;line++)
	{
		
		cout<<" ";
		
	}
	for(int line=n+1;line<=2*n-1;line++)
	{
		for(int sp=0;sp<line-n;sp++)
		{
			cout<<" ";
		}
		
		for(int j=0;j<2*(2*n-line)-1;j++)
		{
			
			char ch=('A'+j);
			cout<<ch;
		}
		cout<<endl;
	}

	return 0;
}
