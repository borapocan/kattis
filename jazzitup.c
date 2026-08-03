#include <stdio.h>

int c(int n)
{
	for (int i = 2; i * i < n; i++) {
		if (n % (i * i) == 0) {
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n, m = 2; scanf("%d", &n);
	while (m < n) {
		if (c(m * n)) {
			printf("%d", m);
			return 0;
		}
		m++;
	}
	return 0;
}
