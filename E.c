#include <stdio.h>
#include <math.h>

int main()
{
    int T;

    double D, K, X, r0, r1, black_circle, pi = (double)acos(-1);
    // printf("%lf", (double)M_PI);
    scanf("%d", &T);
    for (size_t i = 0; i < T; i++)
    {
        scanf("%lf %lf", &D, &K);
        getchar();
        X = (double)(D / (2 * pi));
        r1 = (double)(X / (K - 1));
        r0 = (double)(X + r1);
        black_circle = (double)((pi * (r0 * r0)) - (pi * (r1 * r1)));
        printf("%.6lf\n", black_circle);
    }
    return 0;
}
