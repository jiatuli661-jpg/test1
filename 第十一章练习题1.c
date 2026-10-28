#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("用法: %s <底数> <指数>\n", argv[0]);
        return 1;
    }
    double base = atof(argv[1]);
    int exponent = atoi(argv[2]);
    double result = pow(base, exponent);
    printf("%.6f 的 %d 次幂 = %.6f\n",
           base, exponent, result);

    return 0;
}