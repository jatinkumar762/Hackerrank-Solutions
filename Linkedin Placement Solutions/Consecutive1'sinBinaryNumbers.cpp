#include<iostream>
using namespace std;

int main()
{
	int arr[30],i,k,flag;
	long long int n,max,tmp;
	
	cin>>n;
	i=0;
	while(n!=0)
	{
		arr[i++]= n%2!=0?1:0;
		n=n/2;	
	}
	
	if(arr[0]==1)
	  flag=max=tmp=1;
	else
      flag=max=tmp=0;
	
	
	for(k=1;k<i;k++)
	{
	    if(arr[k]==1)
	    {
	    	flag=1;
	        if(arr[k]==arr[k-1])	
	        tmp++;
	    } 
		else
	   	{
	    		if(tmp>max)
	    		max=tmp;
	    		tmp=1;
	   	} 	
    }
    if(tmp>max)
    max=tmp;
	if(flag)
	{
		if(max!=0)
		cout<<max<<endl;
		else
		cout<<1<<endl;
	}
	else
	cout<<0<<endl;

	return 0;
}
