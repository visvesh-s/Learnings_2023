#include <stdio.h>
#include <string.h>

void encode(char *str) {
    int key = 7; 

    for (int i = 0; i < strlen(str); i++) {
        str[i] = str[i] ^ key; 
    }
}

void decode(char *str) {
    int key = 7; 

    encode(str);
}

int main() {
    char str[100];

    printf("Enter the string to encode: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    printf("Original string: %s\n", str);

    encode(str);
    printf("Encoded string: %s\n", str);

    decode(str);
    printf("Decoded string: %s\n", str);

    return 0;
}
