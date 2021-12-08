#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fp;
    char ch;
    char a[50];
    printf("A fajl ae: ");
    scanf("%s", a);
    fp = fopen(a, "w");
    printf("Az uzenet: ");
    while( (ch = getchar()) != '#') {
        putc(ch, fp);
    }
    fclose(fp);
    fp = fopen(a, "r");
    while ( (ch = getc(fp)) != EOF ) {
        printf("%c", toupper(ch));
    }
    fclose(fp);
	char b[50] = "Atmeneti";
    FILE *fpp = fopen(b, "w");
    fp = fopen(a, "r");
    fseek(fp, 0L, SEEK_END);
    int pos = ftell(fp);
    fseek(fp, 0L, SEEK_SET);
    while (pos--)
    {
        ch = fgetc(fp);
        fputc(toupper(ch), fpp);
    }
    fclose(fp);
    fclose(fpp);
    remove(a);
    rename(b, a);
    return 0;
}

