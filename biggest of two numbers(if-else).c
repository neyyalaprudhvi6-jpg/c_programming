//biggest of two numbers
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and b values:");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		printf("%d is bigger",a);
	}
	else 
	{
		printf("%d is bigger",b);
	}
	return 0;
}
