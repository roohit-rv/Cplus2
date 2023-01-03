#include<iostream>
using namespace std;
int main()
{
	int rows,col;
	cout<<"enter the number of rows"<<endl;
	cin>>rows;
	cout<<"enter the number of columns"<<endl;
	cin>>col;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
