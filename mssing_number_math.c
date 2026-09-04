#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0;
    int total;
    int missing;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter numbers: ");

    for (i = 0; i < n - 1; i++)
    {
        int num;
        scanf("%d", &num);
        sum = sum + num;
    }

    total = n * (n + 1) / 2;

    missing = total - sum;

    printf("Missing number: %d\n", missing);

    return 0;
}
