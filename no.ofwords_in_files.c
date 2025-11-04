//no.of words in files
#include<stdio.h>
int main()
{
	char c;
	int count=0;
	FILE *fp=fopen("abc.txt","r");
	c=fgetc(fp);
	while (c!=EOF)
	{
		c=fgetc(fp);
		if(c==EOF||c=='\n')
		count++;
	}
	printf("no.of words:%d",count);
	return 0;
}
