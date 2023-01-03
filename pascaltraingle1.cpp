#include<iostream>
using namespace std;
int main()
{
	int i,j;
	cout<<"pascal traingle is given"<<endl;
	cout<<"enter the row and the column where you want to find the element"<<endl;
	
	cin>>i;
	cin>>j;
	int factorial1=1,factorial2=1;
	for(int k=1;k<=i;k++)
	{
		factorial1*=k;   //factorial1=24
	}
	
	for(int l=1;l<=j;l++)
	{
		factorial2*=l; //factorial2=2
	}
	
	int m=i-j;   //m=i-j=4-2=2
	int factorial3=1;
	for(int k=1;k<=m;k++)
	{
		factorial3*=k; //factorial3=2
	}
	int element;
	element=factorial2*factorial3; //element=2*2=4
 element=element=factorial1/element;  // element=24/4=6
	cout<<"the element at the "<<i<<" row and "<<j<<" column is "<<element<<endl;
	return 0;
	
}
