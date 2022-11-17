 #include <stdio.h>
 
int main()
{
    int N, i, j, l=0;
    char letras[10000], caracterReq;
    scanf ("%d", &N);
    getchar();
    if (N>=1 && N<=20)
    {
    for (j=0; j<N; j++)
    {
        scanf ("%c %[^\n]", &caracterReq, letras);
        getchar();
        for (i=0; letras[i]!='\n'; i++)
        {
            if (letras[i]==caracterReq && l==0)
            {
            printf("Caractere %c encontrado no indice %d da string.", caracterReq, i);
            l++;
            }
        }
        if (l==0)
        {
            printf("Caractere %c nao encontrado.", caracterReq);
        }
        l=0;
        printf ("\n");
    }
    }
    return 0;
}