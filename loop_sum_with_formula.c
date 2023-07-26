#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of N : ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("The Summation is %d\n", sum);
    int sum2 = (n * (n + 1)) / 2;
    printf("The Summation is %d\n", sum2);
    return 0;
}