#include<stdio.h>

int main()
{
	int test,N;
	long long int sum,i,flag;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%d",&N);
		sum=N;
		flag=1;
		while(flag)
		{
			for(i=N;i>=1;i--)
			{
				if(sum%i!=0)
				break;
			}
			if(i==0)
			flag=0;
			else
			sum++;
		}
		printf("%lld\n",sum);	
	}	
	return 0;
}
