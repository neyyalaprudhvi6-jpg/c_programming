//avg of araray elements using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,n,i,sum=0;
	printf("enter no.of elements:");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));	
	if(ptr==NULL)
	{
		printf("memory is not allocated");
		exit (0);
	}
	else
	{
		for(i=0;i<n;i++)
		{
		scanf("%d",ptr+i);
		}
		
		printf("enter array elements:");		
		for(i=0;i<n;i++)
		{
		sum+=*(ptr+i);
		}
		float avg=sum/i;
		printf("%.2f",avg);
	}
	return 0;
}
