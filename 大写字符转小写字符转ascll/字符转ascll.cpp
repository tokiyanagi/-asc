#include<stdio.h>
int main(void)
{
	char c1, c2;
	c1 = getchar();
	{if (c1 < 91)
	c2 = c1 + 32;
	else
		c2 = c1;
	}
	printf("%c\n", c2);
	printf("%d\n", c2);
	return 0;
}