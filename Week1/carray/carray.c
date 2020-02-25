
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    long n = 5;
    double a = 3.14;
    if (argc > 1)
        n = atol(argv[1]);
    if (argc > 2)
        a = atof(argv[2]);
    printf("n = %ld, a = %lf\n", n, a);
    return 0;
}
