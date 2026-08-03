#include <stdio.h>
#include <stdlib.h>

int main(int argc, char**argv) {
	int m, n, size, count = 0;
	scanf("%d %d", &m, &n);
	size = m * n;
	while (n--) {
		char *str = (char*)malloc(sizeof(char) * m);
		scanf("%s", str);
		for (int i = 0; i < m; i++) {
			if (str[i] == '.') {
				count++;
			}
		}
	}
	printf("%lf\n", ((double)count / size));
	return 0;
}
