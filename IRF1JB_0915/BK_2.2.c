#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *f;
    char kar;
    char fnev[50];
    printf("Kérem adja meg a fájl nevét ");
    scanf("%s", fnev);
    f = fopen(fnev, "w");
    printf("A fájlba beküldeni való szöveg ");
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
