#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=2; i<=N*2; i=i+2)
    {
        for(j=1; j<=i; j++)
        {
            // For every odd column print 1
            if(j % 2 == 0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }

        printf("\n");
    }

    return 0;

}
