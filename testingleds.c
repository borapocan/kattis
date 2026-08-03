/*
Author: Merih Bora Poçan
Sat 24 Jan 2026 10:10:14 PM +03
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int time, state;
    int firstOff = -1; // Default if LED was never off

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &time, &state);

        if (state == 0) { // LED is off
            if (firstOff == -1 || time < firstOff) {
                firstOff = time; // Update to earliest off time
            }
        }
    }

    printf("%d\n", firstOff);
    return 0;
}
