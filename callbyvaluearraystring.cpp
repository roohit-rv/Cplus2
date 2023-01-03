#include<iostream>
using namespace std;
void index(string s, char charac, int *f, int *l)
{
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==charac)
		{
			*f=i;
			break;
		}
	}
	for(int i=s.size()-1;i>=0;i--)
	{
		if(s[i]==charac)
		{
			*l=i;
			break;
		}
	}
}
int main()
{
	string s="aaabac";
	char ch='a';
	int first=-1, last=-1;
	index(s,ch,&first,&last);
	cout<<first<<" "<<last<<endl;
	return 0;
}
