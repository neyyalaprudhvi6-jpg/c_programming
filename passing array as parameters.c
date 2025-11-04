//passing array as parameters
#include<stdio.h>
void read(int[],int);
void display(int[],int);
void read(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);		
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
int main()
{
	int a[10],n;
	printf("enter no.of elements:");
	scanf("%d",&n);
	printf("enter array elements:");
	read(a,n);
	printf("array elements are :\n");
	display(a,n);
	return 0;
}
