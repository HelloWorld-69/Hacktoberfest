#include <iostream>

using namespace std;

void missingElements(int arr[],int s)
{
	int difference=arr[0];
	for(int i=0;i<s;i++)
	{
		if(arr[i]-i!=difference)
		{
			while(difference<arr[i]-i)
			{
				cout<<i+difference<<" ";
				difference++;
			}
		}
	}
}

void missingElements(int arr[],int l, int h, int s)
{
	int arr1[h];
	for(int i=0;i<h;i++)
		arr1[i]=0;
	for(int i=0;i<s;i++)
		arr1[arr[i]]++;
	for(int i=l;i<=h;i++)
	{
		if(arr1[i]==0)
			cout<<i<<" ";
	}
}

int main()
{
	int arr[]={1,2,3,7,8,9,10,11};
	int s=sizeof(arr)/sizeof(int);
	missingElements(arr,s);
	cout<<endl;
	missingElements(arr,1,11,8);
	return 0;
}
