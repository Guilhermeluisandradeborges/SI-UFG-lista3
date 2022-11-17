#include <stdio.h>
#include <string.h>
 
int main()
{
    int N, i, j, k, N1, N2;
    scanf ("%d", &N);
    for (j=0; j<N; j++)
    {
        scanf ("%d %d", &N1, &N2);
        for (i=N1; i<=N2; i++)
        {
            printf ("%d", i);
        }
        for (k=N2; k>=N1; k--)
        {
            printf ("%d", k);
        }
        printf ("\n");
    }
    return 0;
}