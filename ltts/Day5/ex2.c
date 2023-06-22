#include <stdio.h>

int sti(const char* str) {
    int res = 0;
    int i = 0;

    while (str[i] != '\0') {
        int ival = str[i] - '0'; 
        res = res * 10 + ival;
        i++;
    }

    return res;
}

int main() {
    char inputString[] = "5278";
    int result = sti(inputString);

    printf("Converted Integer: %d\n", result);

    return 0;
}
