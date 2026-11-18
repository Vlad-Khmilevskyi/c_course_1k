#include "app.h"

int main()
{
    printf("Enter a, b, x:");

    double a, b, x;

    int ret = scanf("%lf %lf %lf", &a, &b, &x);

    if (ret != 3)
    {
        printf("Invalid input\n");
        return 1;
    }

    double y = exp(1 - a * x) * (1 + sin(x - b));

    printf("Result of exp(1 - a * x) * (1 + sin(x - b))=%.3f\n", y);

    return 0;
}