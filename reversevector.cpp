#include<iostream>
#include<vector>
//using namespace std;
int main()
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	
	std::cout<<"the given vector is "<<std::endl;
	for(int i=0;i<v.size();i++)
	{
		std::cout<<v[i]<<std::endl;
	}
	std::cout<<"performing the reverse operation on the vector"<<std::endl;
	reverse(v.begin(), v.end());
	reverse(v.begin(), v.begin()+k);
	reverse(v.begin()5-k, v.end());
	cout<<"so the array is"<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}
	return 0;
	
}
