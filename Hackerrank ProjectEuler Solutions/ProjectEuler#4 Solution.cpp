#include<stdio.h>

int isPalin(long long int N)
{
   long long int tmp=N,new=0,div=10;
   while(tmp>0)
   {
   	 new=(new*div)+(tmp%10);
   	 tmp=tmp/10;
   }
   if(new==N)
   return 1;
   else
   return 0;
}

int main()
{
	int test,i,j,flag;
	long long int N,mul,max;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%lld",&N);
		flag=0,max=0;
		for(i=999;i>=100;i--)
		{
			for(j=i;j>=100;j--)
			{
				mul=(j*i);
			    if(mul<N)
				{
					if(isPalin(mul))
					{
	                  flag=1;
					  break;
				    }
				}	
			}
		    if(max<mul)
		    max=mul;
		}
		printf("%lld\n",max);
	}
	return 0;
}
