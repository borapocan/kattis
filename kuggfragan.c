/*
Author: Merih Bora Poçan
Sat 31 Jan 2026 04:54:13 PM +03
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int n, m; scanf("%d %d", &n, &m);

	int visited[100];
	int count[100] = {0};

	for (int i = 0; i < m; i++) {
		int u, v; scanf("%d %d", &u, &v);
		visited[i * 2] = u;
		visited[i * 2 + 1] = v;


	}

	int size = 2 * m;

	for (int i = 0; i < size; i++) {
		int count = 1;

		// Count how many SAME values appear consecutively
		while (i + count < size && visited[i] == visited[i + count]) {
			count++;
		}

		// Put frequency in the FIRST occurrence
		visited[i] = count;

		// The rest of same values become 1
		for (int j = 1; j < count; j++) {
			visited[i + j] = 1;
		}

		// Skip over the processed block
		i += count - 1;
	}

	for (int i = 0; i < size; i++) {
		printf("%d ", visited[i]);
	}



















	return 0;
}
