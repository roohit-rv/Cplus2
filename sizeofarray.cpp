#include<iostream>
using namespace std;
int main()
{
	int arr[7];
	cout<<"size of array is "<<sizeof(arr)<<endl;
    cout<<"length of the array is "<<sizeof(arr)/sizeof(arr[4])<<endl;
    return 0;
}
