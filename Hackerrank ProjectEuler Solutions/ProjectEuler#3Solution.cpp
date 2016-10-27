#include<stdio.h>
#include<math.h>

void prime(long long int N)
{
	long long int i,max=0;
	int flag=0;
	
	while(N%2==0)
	{
		N=N/2;
		flag=1;
	}
	if(flag)
	{
		max=2;
	}
	
	for(i=3;i<=sqrt(N);i+=2)  //N must be odd at this time
	{
		flag=0;
		while(N%i==0)
		{
			N=N/i;
			flag=1;
		}
		if(flag)
		max=i;
	}
	
	if(N>2)   //When N is a prime number 
    max=N;
    
    printf("%lld\n",max);
}

int main()
{
  long long int N,test;
  scanf("%lld",&test);
  
  while(test--)
  {
  scanf("%lld",&N);
  prime(N);
  }
  return 0;	
}
