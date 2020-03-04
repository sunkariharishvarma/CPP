#include<iostream>
using namespace std;
int binarysearch(int arr[50],int search,int n)
{
	int l=1,r=n,mid=-1;
	int ar[50];
	
	for(int i=l;i<r;i++)
	{
		mid=(l+r)/2;
		if(search==arr[mid])
		{
			return mid;
		}
		else if(search>arr[mid])
		{
			l=mid+1;
		}
		else
		{
			r=mid-1;
		}
	}
	return mid;
}
int main()
{
	int index;
	int arr[50]={10,20,30,40,50,60,70,80,90};
	index=binarysearch(arr,80,9);
	cout<<index;
}
