#include <stdio.h>

int main()
{
    int n, i, j;
    int a[100];
    int found;
    int missing = -1;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter numbers: ");

    for (i = 0; i < n - 1; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 1; i <= n; i++)
    {
        found = 0;

        for (j = 0; j < n - 1; j++)
        {
            if (a[j] == i)
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            missing = i;
            break;
        }
    }

    printf("Missing number: %d\n", missing);

    return 0;
}
