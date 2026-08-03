#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, count = 0; scanf("%d", &n);
	for (int i = 0; i < 3; i++) {
		int wheel_nums[n];
		for (int j = 0; j < n; j++) {
			scanf("%d", &wheel_nums[j]);
			if (wheel_nums[j] == 7) {
				count++;
			}
		}
	}
	if (count == 3) {
		printf("777\n");
	} else {
		printf("0\n");
	}
	return 0;
}
