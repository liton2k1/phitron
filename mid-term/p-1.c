#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int num;
    int count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            count1++;
        }
        else if (num % 3 == 0)
        {
            count2++;
        }
    }

    printf("%d %d\n", count1, count2);

    return 0;
}