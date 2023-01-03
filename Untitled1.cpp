#include<iostream>
using namespace std;
int main()
{
	int x=10;
	int *z=&x;
	cout<<x<<endl;
	cout<<&x<<endl;
	cout<<z<<endl;
	cout<<&z<<endl;
	 pointer *y=&z;
	cout<<y<<endl;
	return 0;
}
