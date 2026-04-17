#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int sum = 0;
    int posSum = 0, negSum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &sum);

        if (sum > 0)
        {
            posSum += sum;
        }
        else if (sum < 0)
        {
            negSum += sum;
        }
    }

    printf("%d %d", posSum, negSum);

    return 0;
}