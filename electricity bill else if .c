//To generate electricity bill
#include<stdio.h>
int main()
{
	int units;
	float total,service,t;
	printf("enter no.of units:");
	scanf("%d",&units);
	if(units<=50)
	{
		t=units*0.5;
	}
	else if(units<=150)
	{
		t=25+(units-50)*1.2;
	}
	else if(units<=250)
	{
		t=145+(units-150)*1.5;
	}
	else
	{
		t=295+(units-250)*2.0;
	}
	service=t*0.2;
	total=t+service;
	printf("electricity bill is %.2f",total);
	return 0;
}
