/*
Author: Merih Bora Poçan
Sun 11 Jan 2026 05:09:08 PM +03
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Number {
	unsigned int whole, numerator, denominator;
} Number;

unsigned int GCD(unsigned int a, unsigned int b) {
    while (b != 0) {
        unsigned int t = b;
        b = a % b;
        a = t;
    }
    return a;
}


Number show_fractions(unsigned long long n) {
    Number num;

    unsigned long long i = 1;
    while (i * (i + 1) / 2 < n) {
        i++;
    }

    unsigned long long prev = (i - 1) * i / 2;
    unsigned long long offset = n - prev - 1;

    num.whole = i;
    if (offset == 0) {
        num.numerator = 0;
        num.denominator = 0;
    } else {
        num.numerator = offset;
        num.denominator = i;
    }

    return num;
}


int main(int argc, char **argv)
{
	unsigned int n; scanf("%u", &n);
	Number num = show_fractions(n);
	printf("%u ", num.whole);
	if (num.numerator && num.denominator) {
		int gcd = GCD(num.numerator, num.denominator);
		int numerator = (num.numerator / gcd);
		int denomerator = (num.denominator / gcd);
		printf("%d/%d\n", numerator, denomerator);
	}





	return 0;
}
