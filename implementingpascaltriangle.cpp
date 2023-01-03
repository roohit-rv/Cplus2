#include<iostream>
using namespace std;
int facrow(int x)
{
	int row=1;
		for(int m=1;m<=x;m++)
	{
		row*=m;   
		
		
	}
	return row;
}
int faccol(int y)
{
	int col=1;
		for(int n=1;n<=y;n++)
	{
		col*=n;   
		
	}
	return col;
	
}
int fac(int a, int b)
{
	int c=a-b;
	int facto=1;
			for(int o=1;o<=c;o++)
	{
		facto*=o;   
		
	}
	return facto;
	
}
int main()
{
	int i,j;
	int fac1,fac2,fac3;
	cout<<"we are going to print the pascal triangle"<<endl;
	cout<<"enter the number of rows and column till which you want to display the pascal triangle"<<endl;
	cin>>i>>j;
	for(int k=0;k<i;k++)
	{
		for(int l=0;l<k+1;l++)
		{
			fac1=facrow(k);
			fac2=faccol(l);
			fac3=fac(k,l);
			int ele=fac2*fac3;
			ele=fac1/ele;
			cout<<ele<<" ";
		}
		cout<<endl;
	}
	return 0;
	
}
