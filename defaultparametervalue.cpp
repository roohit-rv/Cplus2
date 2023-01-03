#include<iostream>
using namespace std;
int add(int a=1, int b=3, int c=3)
{
	return a+b+c;
}
int main()
{
	int p=7;
	int q;
	q=add();
	cout<<q<<endl;
	return 0;
}
