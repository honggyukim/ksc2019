#include <stdio.h>
#include <stdlib.h>

//hello linux filesystem\n
#define SIZE 24

void main()
{
    FILE *fp = fopen("hello.txt","r");
    char buf[BUFSIZ];

    if (fp) {
        fread(buf, SIZE, 1, fp);
        printf("%s", buf);
        fclose(fp);
    }
}
