//to copy a file into another file
#include<stdio.h>
int main()
{
	char c;
	FILE *f1,*f2;
	f1=fopen("abc.txt","r");
	f2=fopen("xyz.txt","w");
	c=fgetc(f1);
	while(c!=EOF)
	{
	fputc(c,f2);
	c=fgetc(f1);
	}
	fclose(f1);
	fclose(f2);
	return 0;
 } 
