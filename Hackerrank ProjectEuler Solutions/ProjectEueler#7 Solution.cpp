#include<stdio.h>

int isPrime(long long int p)
{
   long long int i;
   for(i=2;(i*i)<=p;i++)
   {
   	 if(p%i==0)
   	 return 0;
   }	
   return 1;
}

int main()
{
	long long int T,N,p,count,i,*arr;

	arr=(long long int*)malloc(sizeof(long long int)*10007);
	arr[1]=2,arr[2]=3,arr[3]=5,arr[4]=7;
	count=5;
		    for(i=2;count<10007;i++)
		    {
		    	if(isPrime(6*i-1))
		    	{
		    		arr[count++]=(6*i-1);
		    		if(count==10007)
		    		break;
		    	}
		    	if(isPrime(6*i+1))
		    	{
		    		arr[count++]=(6*i+1);
		    		if(count==10007)
		    		break;
		    	}
		    }
			
	scanf("%lld",&T);	
	while(T--)
	{
		scanf("%lld",&N);
		printf("%lld\n",arr[N]);
	}
	
	return 0;
}
