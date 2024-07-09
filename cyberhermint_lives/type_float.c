#include <stdio.h>

int main(){
    float pi = 3.141592; // ussualy 4 bytes
    double PI = 3.1415; // usualy 8 bytes
    long double tres_tercos = 1. / 3.; //0.33333333... 

    printf("size in bytes - float: %ld\n ", sizeof(float));
    printf("size in bytes - double: %ld\n", sizeof(double));
    printf("size in bytes - long double: %ld\n", sizeof(long double));

    printf("1 / 3 = %llf\n", tres_tercos);

    return 0;
}