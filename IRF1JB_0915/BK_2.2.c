#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *f;
    char kar;
    char fnev[50];
    printf("K�rem adja meg a f�jl nev�t ");
    scanf("%s", fnev);
    f = fopen(fnev, "w");
    printf("A f�jlba bek�ldeni val� sz�veg ");
    while( (kar = getchar()) != '#') {
    putc(kar, f);
    }
    fclose(f);
    f = fopen(fnev, "r");
    while ( (kar = getc(f)) != EOF ) {
    printf("%c",toupper(kar));
    }
    fclose(f);

    return 0;
}
