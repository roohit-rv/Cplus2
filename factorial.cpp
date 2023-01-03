#include<iostream>
using namespace std;
int main()
{
	int factorial=1, n;
	cout<<"enter the number for factorial"<<endl;
	cin>>n;
	if(n==0)
	{
		factorial;
	}
	else
	{
	
	for(int i=1;i<=n;i++)
	{
		factorial*=i;
	}
}
	cout<<factorial<<endl;
	return 0;
}
