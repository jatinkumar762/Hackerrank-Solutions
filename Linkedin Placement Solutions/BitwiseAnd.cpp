#include<iostream>
using namespace std;

int main()
{
	long long int test,N,K,max,i,j,tmp;
	
	cin>>test;
	while(test--)
	{
	    cin>>N>>K;
	    max=0;
		for(i=2;i<N;i++)	
		{
			for(j=i+1;j<=N;j++)
			{
			   tmp=(i&j);
			   if(tmp<K)
			   {
			   	   if(tmp>max)
			   	   max=tmp;
			   }	
			}
		}
		cout<<max<<endl;	
		
    }
	return 0;
}
