/*
Author: Merih Bora Poçan
Mon 12 Jan 2026 02:50:36 AM +03
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 15


int main(int argc, char **argv)
{
	const char *months[] = {
		"JAN","FEB","MAR","APR","MAY","JUN",
		"JUL","AUG","SEP","OCT","NOV","DEC"
	};
	char *date = (char*)malloc(sizeof(char) * SIZE);
	char day[3], imonth[4], emonth[4], year[3];
	fgets(date, SIZE, stdin);
	strncpy(day, date, 2);
	strncpy(imonth, date + 3, 3);
	strncpy(emonth, date + 8, 3);
	strncpy(year, date + 12, 2);

	int month;

	for (int i = 0; i < 12; i++) {
		if (strcmp(emonth, *(months + i)) == 0) {
			month = i + 1;
			break;
		}
	}

	printf("20%s-%02d-%s\n", year, month, day);



	return 0;
}
