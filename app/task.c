#include <math.h>
#include <stdio.h>

int task(double a, double b, double c, double* x1, double* x2)
{
    double d;

    if (a != 0) {

        if (b != 0 && c == 0) {
            *x1 = 0;
            *x2 = -b / a;
            return 2;
        }

        if (b == 0 && c != 0 && (-c / a >= 0)) {
            *x1 = sqrt(-c / a);
            *x2 = -sqrt(-c / a);
            return 2;
        }

        if (b == 0 && c == 0) {
            *x1 = 0;
            return 1;
        }

    } else {

        if (b != 0) {
            *x1 = -c / b;
            return 1;
        }

    }

    d = b * b - 4 * a * c;

    if (d > 0 && a != 0) {
        *x1 = (b * (-1) + sqrt(d)) / (2 * a);
        *x2 = (b * (-1) - sqrt(d)) / (2 * a);
        return 2;
    }
    if (d == 0 && a != 0) {
        *x1 = -b / (2 * a);
        return 1;
    }

    if (d < 0)
        return 0;

    return -1;
}
