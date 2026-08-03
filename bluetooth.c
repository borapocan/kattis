#include <stdio.h>
#include <string.h>

typedef struct {
	char *tooth;
	char condition;
} Dental;

int check_all_missing(Dental *d) {
	for (int i = 0; i < 8; i++) {
		if (d[i].condition != 'm') return 0;
	}
	return 1;
}

int check_blue(Dental *d) {
	for (int i = 0; i < 8; i++) {
		if (d[i].condition == 'b') return 1;
	}
	return 0;
}


int main(int argc, char **argv) {

	int n; scanf("%d", &n);

	// Upper Right Teeth
	Dental upperRight[] = {
		{ "8+", '0' },
		{ "7+", '0' },
		{ "6+", '0' },
		{ "5+", '0' },
		{ "4+", '0' },
		{ "3+", '0' },
		{ "2+", '0' },
		{ "1+", '0' }
	};

	// Lower Right Teeth
	Dental lowerRight[] = {
		{ "8-", '0' },
		{ "7-", '0' },
		{ "6-", '0' },
		{ "5-", '0' },
		{ "4-", '0' },
		{ "3-", '0' },
		{ "2-", '0' },
		{ "1-", '0' }
	};

	// Upper Left Teeth
	Dental upperLeft[] = {
		{ "+8", '0' },
		{ "+7", '0' },
		{ "+6", '0' },
		{ "+5", '0' },
		{ "+4", '0' },
		{ "+3", '0' },
		{ "+2", '0' },
		{ "+1", '0' }
	};

	// Lower Left Teeth
	Dental lowerLeft[] = {
		{ "-8", '0' },
		{ "-7", '0' },
		{ "-6", '0' },
		{ "-5", '0' },
		{ "-4", '0' },
		{ "-3", '0' },
		{ "-2", '0' },
		{ "-1", '0' }
	};


	char *names[] = { "Upper Right", "Lower Right", "Upper Left", "Lower Left" };

	Dental *quadrants[] = { upperRight, lowerRight, upperLeft, lowerLeft };

	for (int i = 0; i < n; i++) {
		char tooth[3], condition;
		scanf("%s %c", tooth, &condition);

		for (int q = 0; q < 4; q++) {
			for (int j = 0; j < 8; j++) {
				if (strcmp(quadrants[q][j].tooth, tooth) == 0) {
					quadrants[q][j].condition = condition;
					break;
				}
			}
		}
	}

	printf("%d\n", check_blue(lowerLeft));

	// Right side: upper and lower must have at least one non-missing tooth, AND no blue tooth anywhere
	int rightUsable = (!check_all_missing(upperRight) && !check_all_missing(lowerRight)) &&
		(!check_blue(upperRight) && !check_blue(lowerRight));

	// Left side: same
	int leftUsable  = (!check_all_missing(upperLeft) && !check_all_missing(lowerLeft)) &&
		(!check_blue(upperLeft) && !check_blue(lowerLeft));

	if (leftUsable)  printf("0\n");
	if (rightUsable) printf("1\n");
	if (!leftUsable && !rightUsable) printf("2\n");

	return 0;
}
