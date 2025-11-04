//Arithmetic operations using functions
#include<stdio.h>
void arth (int,int);
void arth(int a,int b)
{
	printf("%d+%d=%d\n",a,b,a+b);
	printf("%d-%d=%d\n",a,b,a-b);
	printf("%d*%d=%d\n",a,b,a*b);
	printf("%d/%d=%d\n",a,b,a/b);
	printf("%d%%%d=%d\n",a,b,a%b);
}
int main()
{
	int a,b;
	printf("enter a and b values:");
	scanf("%d%d",&a,&b);
	arth(a,b);
	return 0;
}
