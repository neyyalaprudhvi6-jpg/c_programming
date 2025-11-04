//complex numbers
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float discriminant ,r1,r2,real,img;
	printf("enter coefficients a,b and c:");
	scanf("%d%d%d",&a,&b,&c);
	if(a==0)
	printf("not a quadratic equation");
	else
	{
		discriminant=b*b-4*a*c;
		if(discriminant>0)
		{
		r1=(-b+sqrt(discriminant))/(2*a);
		r2=(-b-sqrt(discriminant))/(2*a);
		printf("roots are real and distinct:.%2f .%2f\n",r1,r2);
		}
		else if (discriminant==0)
		{
			real=-b/(2*a);
			img=sqrt(-discriminant)/(2*a);
			printf("roots are real and complex: %.2f+%.2fi %.2f-%.2fi\n",real,img,real,img);
			return 0;
		}
	}
	
}
