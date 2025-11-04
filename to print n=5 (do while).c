//to print n=5
#include<stdio.h>
int main()
{
	int n,r=1,c;
	printf("enter a number:");
	scanf("%d",&n);
	do
	{
		c=1;
		do
		{
			printf("%d ",c);
			c++;
		}while(c<=n);
		r++;
		printf("\n");
	}while(r<=n);
	return 0;
}
