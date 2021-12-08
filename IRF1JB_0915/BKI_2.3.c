#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main()
{
    FILE *fp, *fpp;
    char ch;
    char a[50];
    char b[50] = "atmasolt.txt";
    printf("A fajl neve: ");
    scanf("%s", a);
    fp = fopen(a, "w");
    printf("Az uzenet: ");
    while( (ch = getchar()) != '#') {
        putc(ch, fp);
    }
    fclose(fp);
    int c;
    if ((fp = fopen(a, "r")) == NULL)
    {
        printf("\nHiba a fajl megnyitasa soran!\n");
        return 0;
    }
    else
    {
        printf("\nFajl megnyitva masolasra\n ");
    }
    fpp = fopen(b, "w");
    fseek(fp, 0L, SEEK_END);
    c = ftell(fp);
    fseek(fp, 0L, SEEK_SET);
    while (c--)
    {
        ch = fgetc(fp);
        fputc(ch, fpp);
    }
    fclose(fp);
    fclose(fpp);
}
