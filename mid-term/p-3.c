#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);

        int total_farmer = M1 + M2;

        int new_days = (M1 * D) / total_farmer;

        int result = D - new_days;

        printf("%d\n", result);
    }

    return 0;
}