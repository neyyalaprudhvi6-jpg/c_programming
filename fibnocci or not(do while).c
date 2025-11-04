//fibnocci number or not
#include<stdio.h>
int main()
{
	int n,f1=0,f2=1,f3,flag=0;
	printf("enter a number:");
	scanf("%d",&n);
	do
	{
		if(f1==n)
		flag=1;
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}while(f1<=n);
	if(flag==0)
	printf("not a fibnocci number");
	else
	printf("fibnocci number");
	return 0;
}
