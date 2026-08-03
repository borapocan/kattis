#include <stdio.h>
#include <stdlib.h>

/* Created on: 2026-01-03 by Merih Bora Pocan */

typedef struct Interval {
	int start, end;
} Interval;

int count_intervals(Interval *intervals, int hour, int size) {

	int count = 0;

	for (int i = 0; i < size; i++) {
		if (hour >= intervals[i].start &&
			hour <  intervals[i].end) {
			count++;
		}
	}
	return count;
}

int main(int argc, char **argv) {

	int n, k, count = 0;

	Interval *intervals;

	scanf("%d %d", &n, &k);

	intervals = (Interval*)malloc(sizeof(Interval) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &intervals[i].start, &intervals[i].end);

		if (intervals[i].end < intervals[i].start) {
			intervals[i].end += 24;
		}
	}

	for (int hour = 0; hour < 24; hour++) {
		int active = count_intervals(intervals, hour, n);
		if (active >= k) {
			count++;
		}
	}

	printf("%d\n", count);

	free(intervals);


	return 0;
}
