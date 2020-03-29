#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "myfunc.h"

int main()
{
    double a, b, c;
    double x1, x2;

    if (scanf("%lf", &a) == 0) {
        fprintf(stderr, "Something bad happened :(");
        exit(EXIT_FAILURE);
    }

    if (scanf("%lf", &b) == 0) {
        fprintf(stderr, "Something bad happened :(");
        exit(EXIT_FAILURE);
    }

    if (scanf("%lf", &c) == 0) {
        fprintf(stderr, "Something bad happened :(");
        exit(EXIT_FAILURE);
    }

    task(a, b, c, &x1, &x2);
    return myfunc(2);
}
