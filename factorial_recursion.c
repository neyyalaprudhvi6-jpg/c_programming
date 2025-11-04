//factorial of a number using recursion
#include<stdio.h>
int factorial(int);
int factorial(int n)
{
	if(n==0||n==1)
		return 1;
		else
		return n*factorial(n-1);
}
	int main()
	{
		int n;
		printf("enter a number:");
		scanf("%d",&n);
		printf("factorial of given number is:%d",factorial(n));
		return 0;
	}


