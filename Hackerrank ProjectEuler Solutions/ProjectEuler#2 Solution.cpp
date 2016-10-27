#include<iostream>
using namespace std;
int main()
{
	long long int test,a,b,c,sum;
	unsigned long long int n;
	cin>>test;

	while(test--)
	{
	a=5;
	b=8;
	c=a+b;
	sum=10;
	cin>>n;
		while(c<=n)
		{
			a=b;
			b=c;
			c=a+b;
			if(c%2==0&&c<=n)
			sum=sum+c;		
		}
		cout<<sum<<endl;
    }
		
return 0;	
}
