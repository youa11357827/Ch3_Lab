#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int n, m;
	long int ans;
	long int a, b, c;
	printf("求排列組合C(m.n)\n");
	printf("m=");
	scanf_s("%d",&m);
	printf("n=");
	scanf_s("%d",&n);

	a = factorial(m);
	b = factorial(n);
	c = factorial(m-n);
	ans = a / (b*c);
	printf("C(%d,%d)=%d\n",m,n, ans);

	system("Pause");
	
}

long int factorial(int p)
{
	int count;
	long int result = 1;
	for ( count = 1; count <=p ; count++)
	{
		result = result * count;
	}
	return result;
}