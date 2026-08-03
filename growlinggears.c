#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created on: 2025-01-13 by Merih Bora Pocan */

#define SIZE 100

int main() {
    int cases;
    scanf("%d", &cases);

    for (int t = 0; t < cases; t++) {
        int n;
        scanf("%d", &n);

        int best_gear = 0;
        double max_torque = -1;

        for (int i = 0; i < n; i++) {
            int a, b, c;
            scanf("%d %d %d", &a, &b, &c);

            double R_max = -(double)b / (2 * a);

            double T_max = -a * R_max * R_max + b * R_max + c;

            if (T_max > max_torque) {
                max_torque = T_max;
                best_gear = i + 1;
            }
        }

        printf("%d\n", best_gear);
    }

    return 0;
}
