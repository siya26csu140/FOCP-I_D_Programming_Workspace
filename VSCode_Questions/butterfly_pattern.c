#include <stdio.h>

int main()
{
    int n, i, j, stars, spaces;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        stars = (i <= (n + 1) / 2) ? i : n - i + 1;
        spaces = 2 * (n - stars) + 1;

        for(j = 1; j <= stars; j++)
            printf("*");

        for(j = 1; j <= spaces; j++)
            printf(" ");

        for(j = 1; j <= stars; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}