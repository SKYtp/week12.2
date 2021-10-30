#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
char s[100], c;
int c_str, S_len = 0;
int main()
{
	char* p;
	p = s;
	printf("Enter string : ");
	scanf("%s", &s);
	while (*p != '\0')
	{
		p++;
		S_len++;
	}
	printf("\n----------------------\n");
	printf("New string : ");
	for (int i = 0; i < S_len; i++)
	{
		c_str = s[i];
		if (c_str >= 65 && c_str <= 122)
		{
			if (c_str >= 65 && c_str <= 90)
			{
				c = c_str + 32;
				printf("%c", c);
			}
			else if (c_str >= 97 && c_str <= 122)
			{
				c = c_str - 32;
				printf("%c", c);
			}
		}
		else
		{
			printf("%c", s[i]);
		}
	}
	return 0;
}