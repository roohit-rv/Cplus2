#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> vector1, vector2(5);
	int element;
	for(int i=0;i<5;i++)
	{
		cin>>element;
		vector1.push_back(element);
	
	}
	

	for(int i=0;i<5;i++)
	{
		cin>>vector2[i];
	}
}
