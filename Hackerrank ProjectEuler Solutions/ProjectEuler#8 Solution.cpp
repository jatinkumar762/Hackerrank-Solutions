#include<stdio.h>

int main()
{
	int T,K,N,*arr,i,j,tmp;
	char str[1007];
	long long int max;
	arr=(int*)malloc(sizeof(int)*1007);
	
	scanf("%d",&T);
	
	while(T--)
	{
		max=0;
		
		scanf("%d %d",&N,&K);
		scanf("%s",&str);
		for(i=0;i<N;i++)
		arr[i]=str[i]-48;
		
		for(i=0;i<N-K;i++)
		{
			tmp=1;
			for(j=i;j<i+K;j++)
			{
				tmp=tmp*arr[j];
			}
			if(tmp>max)
			max=tmp;
		}
		printf("%lld\n",max);
	}
	
	
	return 0;
}
