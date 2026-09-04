#include <stdio.h>
int main()
{ FILE *fptr;
    fptr = fopen("test.txt","r");

    char ch;
    fscanf(fptr,"%c",&ch);
    printf("chracter = %c",ch);

    fclose(fptr);
    return 0;
}
