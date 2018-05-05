#include <stdio.h>

int main(void)
{
	char c;
	int i;
	for (i=1;i<=6;i++) {
		c=getchar();
		if (c>='a'&&c<='z')c=c+5;
		else if (c>='v'&&c<='z')c='a'+c-'v';
		putchar(c);
	}
	return 0;
}
