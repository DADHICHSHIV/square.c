#include <stdio.h>
int main()
{

    int square;
    printf("Enter a square size: \n");
    scanf("%d", &square);
    for (int i = 1; i <= square; i++)
    {
        for (int j = 1; j <= square; j++)
        {
            if (i == 1 || i == square || j == 1 || j == square)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}