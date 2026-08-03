#include <stdio.h>

int main (int argc, char *argv[])
{
	int s; // miles per hour
	float d, t; // d -  in feet, t - seconds
	scanf("%d %f %f", &s, &d, &t);

	float s_fts = (float)s * 5280 / 3600;
	float d_covered = s_fts * t;


	if (d_covered >= d)
		printf("MADE IT\n");
	else
		printf("FAILED TEST\n");

	return 0;
}
