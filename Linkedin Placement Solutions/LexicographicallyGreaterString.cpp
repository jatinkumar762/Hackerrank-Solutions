#include<iostream>
using namespace std;


void sort(char *arr,int start,int end)
{
	//cout<<start<<end<<endl;
	int i,j,k=1;
	char tmp;
	for(i=start;i<end;i++)
	{
		for(j=start;j<=end-k;j++)
		{
			if(arr[j]>arr[j+1])
			{
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
		k++;
	}
		
}

int main()
{
	long long int test;
	char arr[200],tmp;
	int flag,len,i,j,m;
	cin>>test;
	
	while(test--)
	{
		cin>>arr;
		for(i=0;arr[i];i++);
		len=i;
		flag=0;
	for(m=1;m<len;m++)
	{	
		for(i=len-1;i>=len-m;i--)
		{
			for(j=i-1;j>=len-m-1;j--)
			{
				if(arr[i]>arr[j])
				{
					tmp=arr[i];
					arr[i]=arr[j];
					arr[j]=tmp;
					flag=1;
                    sort(arr,j+1,len-1); 
				}	
				if(flag==1)
				break;
			}
			if(flag==1)
			break;
		}
		if(flag==1)
		break;
	}
		if(flag==0)
		cout<<"no answer"<<endl;
		else
		cout<<arr<<endl;	
	}
	
	return 0;
}
