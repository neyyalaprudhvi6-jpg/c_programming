#include<stdio.h>
int main()
{
	char c;
	printf("enter a character:");
	scanf("%c",&c);
	if((c>64&&c<=90)||(c>96&&c<=122))
	{
		switch(c)
			{
				case 'a':
				case 'A':
				case 'e':
				case 'E':
				case 'i':
				case 'I':
				case 'o':
				case 'O':
				case 'u':
				case 'U':printf("vowel");
							break;
				default:printf("consonant");
			}
	}
	return 0;
}
