#include <stdio.h>

int main()

{

int T;

scanf("%d", &T);

while (T) {

char string1[10001], *par1;
char string2[10001], *par2;
int operacoes = 0;

scanf("%s%s", string1, string2);

for (par1 = string1, par2 = string2; *par1 != '\0'; ++par1, ++par2) {

if (*par2 >= *par1)

operacoes += *par2 - *par1;

else

operacoes += ('z' - *par1) + (*par2 - 'a') + 1;

}

printf("%d\n", operacoes);

--T;

}

return 0;

}