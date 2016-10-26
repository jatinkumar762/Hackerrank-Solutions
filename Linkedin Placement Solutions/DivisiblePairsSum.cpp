#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,count,i,j,tmp; 
    int k; 
    scanf("%d %d",&n,&k);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    count=0;
	for(i=0;i<n-1;i++)
	{
	  for(j=i+1;j<n;j++)
	  {
	       tmp=a[i]+a[j];
	  	   if(tmp%k==0)
	  	   count++;
	  } 
	
	}
	printf("%d\n",count);
    return 0;
}
