#include<iostream>
using namespace std;

int main()
{
	long long int *arr,*sub_arr,n,d,i,j;

    arr=new long long int[100007];
	sub_arr=new long long int[100007];
	
	cin>>n>>d;
		
	for(i=0;i<n;i++)
	cin>>arr[i];
	
	j=0;
	for(i=d;i<n;i++)
	sub_arr[j++]=arr[i];
	
	for(i=0;i<d;i++)
	sub_arr[j++]=arr[i];
	
	for(i=0;i<j;i++)
	cout<<sub_arr[i]<<" ";
	
	return 0;
}
