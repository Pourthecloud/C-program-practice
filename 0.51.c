#include <stdio.h>

int main(void)
{
	int n;
	double sum;
	scanf("%d",&n);
	sum=0;
	while (n>0) {
		if (n%2!=0) {
			sum+=n;
			scanf("%d",&n);
		} else {
			scanf("%d",&n);
		}
	}
	printf("%lf",sum);
	return 0;
}
