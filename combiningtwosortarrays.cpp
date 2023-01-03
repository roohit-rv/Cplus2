#include<iostream>
using namespace std;
int main()
{
 int n,m;
 cout<<"enter the number of elementsyou want to insert in the first array"<<endl;
 cin>>n;
 cout<<"enter the number of elements you want to store in the second array"<<endl;
 cin>>m;
 int arr1[n],arr2[m];
 cout<<"enter the elements in the first array in sorted form"<<endl;
 for(int i=0;i<n;i++)
 {
 	cin>>arr1[i];
 }
 cout<<"enter the elements of the second array in the sorted form"<<endl;
 for(int i=0;i<m;i++)
 {
 	cin>>arr2[i];
 }
 cout<<"the first array is"<<endl;
 for(int i=0;i<n;i++)
 {
 	cout<<arr1[i]<<endl;
 }
 cout<<"the second array is"<<endl;
 for(int i=0;i<m;i++)
 {
 	cout<<arr2[i]<<endl;
 }
 int arr3[m+n];
 cout<<"merging both the arrays into a single array in sorted form"<<endl;
int i=0,k=0,j=0;
while(i<n && k<m)
{
	if(arr1[i]<arr2[k])
	{
		arr3[j]=arr1[i];
		j++;
		i++;
	}
	else
	{
		arr3[j]=arr2[k];
		j++;
		k++;
	}
}
while(i<n)
{
	arr3[j]=arr1[i];
	j++;
	i++;
}
while(k<m)
{
	arr3[j]=arr2[k];
	j++;
	k++;
	
}

 cout<<"the final result is given as"<<endl;
 for(int l=0;l<j;l++)
 {
 	cout<<arr3[l]<<endl;
 }
 return 0;
}
