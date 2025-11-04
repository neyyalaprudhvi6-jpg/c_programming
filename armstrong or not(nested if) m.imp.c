//to check the given number is Armstrong number or not
#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,r,n_digits=0,sum=0;
	printf("enter a number:");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		n_digits++;
		n=n/10;
	}
	n=m;
	while(n!=0)
	{
		r=n%10;
		sum=sum+pow(r,n_digits);
		n=n/10;
	}
	if(sum==m)
	printf("Armstrong number");
	else
	printf("Not a Armstrong number");
	return 0;
}
