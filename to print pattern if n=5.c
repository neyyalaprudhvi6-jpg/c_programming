/*to print following pattern if n=5

1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5
1 2 3 4 5

*/
#include<stdio.h>
int main()
{
	int n,r,c;
	printf("enter a number:");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=n;c++)
		{
			printf("* ");
		}
	printf("\n");
	}
	return 0;	
}

