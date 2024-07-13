#include <openssl/sha.h>
#include <stdio.h>

int main() {
    char entrace[50];
    printf("enter the data to digest:");
    scanf("%s", entrace);
    unsigned char hash[SHA256_DIGEST_LENGTH];
    unsigned char *input = entrace;
    int input_len = strlen((char*)input);

    SHA256_CTX sha256_ctx;
    SHA256_Init(&sha256_ctx);
    SHA256_Update(&sha256_ctx, (unsigned char*)input, input_len);
    SHA256_Final(hash, &sha256_ctx);

    // Print the hash
    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        printf("%02x", hash[i]);
    }
    printf("\n");

    return 0;
}
