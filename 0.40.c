#include <stdio.h>

int main(void)
{
	int i, n;
	scanf("%d",&n);
	if (n>=0) {
		if (n>0) {
			printf("1");
			for (i=3; i<=n; i+=2) {
				printf(" %d",i);
			}
		} else ;
	} else ;
	return 0;
}
