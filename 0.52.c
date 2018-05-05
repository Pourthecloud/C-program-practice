#include <stdio.h>
#include <math.h>

double fact (int n);
int main(void)
{
	int x, i;
	double sum;
	scanf("%d",&x);
	{
		sum=1;
		i=1;
		while (pow(x,i)/fact(i)>=0.00001) {
			sum+=pow(x,i)/fact(i);
			i+=1;
		}
		printf("%.4f",sum);
	}
	return 0;
}
double fact (int n)
{
	int m, count;
	count=1;
	for (m=1; m<=n; m+=1) {
		count*=m;
	}
	return count;
}

