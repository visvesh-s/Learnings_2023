#include <stdio.h>

void printI(int n);
void printS(int n);
void printD(int n);

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        printI(i);
        printS(n - i);
        printD(i);
        printf("\n");
    }

    return 0;
}

void printI(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
    }
}

void printS(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf(" ");
    }
}

void printD(int n)
{
    for (int i = n; i >= 1; i--)
    {
        printf("%d", i);
    }
}
