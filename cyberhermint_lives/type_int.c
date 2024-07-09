#include <stdio.h>


int main() {

    int n = 42;//Warning with dont initialized variables
    int n2 = -42;
    int n3 = 0;//Usually the syze is  4 bytes(1 byte - 8 bits)
    unsigned int n4 = 69;//unsigned its ever Positive 
    printf("%d,%d,%d,\n", n, n2, n3);
    printf("Size in bytes of a varialbe int: %ld\n", sizeof(int));
    printf("n4: %u\n", n4);
    printf("size in bytes - unsigned int: %ld\n", sizeof(unsigned int));
    printf("size in bytes - short int: %ld\n", sizeof(short int));
    printf("size in bytes - long int: %ld\n", sizeof(long int));
    printf("size in bytes - long long int: %ld\n", sizeof(long long int));
    
    return 0;
}

//Resume:
    // int - 4 bytes(Positive and negative)
    // unsigned int - 4 bytes(only posite)/ for exemple de max possible is 2³² -1 
    // short int - 2 bytes (positive and negative)
    // long int - 8 bytes
    // long long int - 8 bytes 
    // lib stdint.h --> when we wnat to mak sure the size of a variable 
    