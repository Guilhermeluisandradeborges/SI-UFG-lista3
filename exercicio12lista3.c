#include <stdio.h>

#include <string.h>

#include <ctype.h>

int main()

{

    char linha[6001], *c, *prev, letra;
    int comprimento, aliteracao;

    while (fgets(linha, 6001, stdin)) {

        aliteracao = 0;
        comprimento = 0;
        letra = '\0';
        c = linha;
        prev = NULL;

    while (*c != '\n') {

        if (!prev || *prev == ' ' && *c != ' ') 
    {

            if (letra == tolower(*c))

                ++comprimento;

        else 
        {

        if (comprimento > 1)
        ++aliteracao;
        
        comprimento = 1;
        letra = tolower(*c);

        }

    }

    prev = c;

    ++c;

    }

    if (comprimento > 1)

    ++aliteracao;

    printf("%d\n", aliteracao);

    }

    return 0;

}