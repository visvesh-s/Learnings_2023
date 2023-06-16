#include <stdio.h>

int Largest(int num)
{
    int L = 0;
    int D = 1;

    while (D <= num)
    {
        int tempNum = (num / (D * 10)) * D + (num % D);
        if (tempNum > L)
            L = tempNum;
        
        D *= 10;
    }

    return L;
}

int main()
{
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largestNum = Largest(num);
    printf("Largest number after deleting a single digit: %d\n", largestNum);

    return 0;
}
