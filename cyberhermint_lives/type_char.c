#include <stdio.h>

int main(){
    char caractere ='b';
    char *string = "satoshito";
    char string2[] = "quarentaedois";
    char string3[3] = "69";//in C the strs ends with \0 null caracter

    printf("strring1: %s\n", string);
    printf("string2: %s\n", string2);
    printf("string3: %s\n", string3);
    printf("1 caractere: %c\n",caractere);
    return 0;

}