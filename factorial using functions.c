//factorial
#include<stdio.h>
int factorial();
int factorial()
{
	int n,f=1,i;
	printf("enter n value:");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	f=f*i;
	return f;
}
int main()
{
	int f;
	f=factorial();
	printf("Factorial of given number is %d",f);
	return 0;
}
