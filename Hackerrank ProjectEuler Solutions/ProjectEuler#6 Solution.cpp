#include<stdio.h>

int main()
{
	long long int T,N,a,b;
	
	scanf("%lld",&T);
	while(T--)
	{
	   scanf("%lld",&N);
	   a=((N)*(N+1)*(2*N+1))/6;
	   b=((N)*(N+1))/2;
	   b=b*b;
	   printf("%lld\n",b-a);
    }
	return 0;
}
