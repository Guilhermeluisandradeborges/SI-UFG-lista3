#include <stdio.h>
 
int main()
{
    int N, i, j, freqletras=0, freqconsoantes=0, freqvogais=0;
    char letras[10000];
    while (scanf ("%[^\n]", letras) != EOF)
    {
        getchar();
        for (i=0; letras[i]!='\0'; i++)
        {
            if (letras[i]!='\0')
            {
                j=i;
            }
        }
        if (letras[0]==letras[j])
        {
                if (letras[1]==letras[j-1])
                {
                    printf ("sim\n");
                }
        }
        else  if (letras[0]!=letras[j] )
        {
                printf ("nao\n");
        }
    }
 
    return 0;
}