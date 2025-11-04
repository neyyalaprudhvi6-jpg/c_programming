//factorial
#include<stdio.h>
int factorial(int);
int factorial(int n)
{
	int f=1,i;
	for(i=2;i<=n;i++)
	f=f*i;
	return f;
}
int main()
{
	int n,f;
	printf("enter n value:");
	scanf("%d",&n);
	f=factorial(n);
	printf("Factorial of given number is %d",f);
	return 0;
}
