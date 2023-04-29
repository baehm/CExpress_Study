#include <stdio.h>
int main()
{
    int N;
    scanf_s("%d", &N);
    for (int i = 1; N >= i; i++)
    {
        
        for (int j = 1; i >= j; j++)
        {
            if (N - i > i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}