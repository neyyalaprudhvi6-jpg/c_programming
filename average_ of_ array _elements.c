//average of array elements
#include<stdio.h>
void read(int[],int);
float average(int[],int);
void read(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);		
}
float average(int a[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	sum+=a[i];
	return (float)sum/n;
}
int main()
{
	int a[10],n;
	float avg;
	printf("enter no.of elements:");
	scanf("%d",&n);
	printf("enter array elements:");
	read (a,n);
	printf("average is %.2f\n",average(a,n));
	return 0;
}
	
