#include <stdio.h>
#include <math.h>

int prime(int p);
int PrimeSum(int m, int n);

int main()
{
	int m, n, p;

	scanf_s("%d %d", &m, &n);
	printf("Sum of ( ");
	for (p = m; p <= n; p++) {
		if (prime(p) != 0)
			printf("%d ", p);
	}
	printf(") = %d\n", PrimeSum(m, n));

	return 0;
}
int prime(int p)
{
	int i;
	if (p == 1 || p == 0)
		return 0;
	if (p < 0)
		return 0;
	for (i = 2; i < p; i++)
	{
		if (p % i == 0)
			return 0;
	}
	return 1;
}
int PrimeSum(int m, int n)
{
	int s = 0;
	while (m <= n)
	{
		if (prime(m) == 1)
			s += m;
		m++;
	}
	return s;
}