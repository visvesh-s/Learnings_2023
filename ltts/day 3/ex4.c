#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

void Small(int n, ...)
{
    int s = INT_MAX;
    int l = INT_MIN;
    int num, temp;

    va_list args;
    va_start(args, n);

    for (int i = 0; i < n; i++)
    {
        num = va_arg(args, int);
        temp = num;

        while (temp != 0)
        {
            int digit = temp % 10;

            if (digit < s)
                s = digit;

            if (digit > l)
                l = digit;

            temp /= 10;
        }
    }

    va_end(args);

    if (s == INT_MAX || l == INT_MIN)
    {
        printf("Not Valid\n");
    }
    else
    {
        printf("Smallest digit: %d\n", s);
        printf("Largest digit: %d\n", l);
    }
}

int main()
{
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    int values[n];
    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &values[i]);
    }

    Small(n, values[0], values[1], values[2]);

    return 0;
}
