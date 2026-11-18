#include "app.h"

int main()
{
    printf("Enter from, to:");
    int from, to;

    int ret = scanf("%d %d", &from, &to);
    if (ret != 2 || from < 0 || to < 0 || from > to)
    {
        printf("Invalid input\n");
        return 1;
    }

    for (int i = from; i <= to; i++)
    {
        int is_prime = 1;
        for (int j = 2; j < i && is_prime; j++)
        {
            is_prime = i % j != 0;
        }
        if (is_prime)
        {
            printf("%d is prime\n", i);
        }
        else
        {
            printf("%d is not prime\n", i);
        }
    }

    return 0;
}