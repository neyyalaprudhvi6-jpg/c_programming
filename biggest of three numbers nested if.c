//biggest of three numbers nested if 
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("a is larger");
		else
		printf("c is larger");
	}
	else
	{
		if(b>c)
		printf("b is larger");
		else
		printf("c is larger");
	}
	return 0;
}
