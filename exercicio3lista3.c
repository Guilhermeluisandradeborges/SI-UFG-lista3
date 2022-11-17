/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int N, i, j, freqletras=0, freqconsoantes=0, freqvogais=0;
    char letras[10000];
    scanf ("%d", &N);
    getchar();
    for (j=0; j<N; j++)
    {
        scanf ("%[^\n]", letras);
        getchar();
        for (i=0; letras[i]!='\0'; i++)
        {
            if (letras[i]>='a' && letras[i]<='z')
            {
                freqletras++;
            }
            else if (letras[i]>='A' && letras[i]<='Z')
            {
                freqletras++;
            }
            if (letras[i]=='a' || letras[i]=='e' || letras[i]=='i' || letras[i]=='o' || letras[i]=='u')
            {
                freqvogais++;
            }
            if (letras[i]=='A' || letras[i]=='E' || letras[i]=='I' || letras[i]=='O' || letras[i]=='U')
            {
                freqvogais++;
            }
        }
        freqconsoantes = freqletras-freqvogais;
        printf ("Letras = %d\n", freqletras);
        printf ("Vogais = %d\n", freqvogais);
        printf ("Consoantes = %d\n", freqconsoantes);
        freqletras=0;
        freqvogais=0;
        freqconsoantes=0;
        
    }

    return 0;
}
