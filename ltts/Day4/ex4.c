#include <stdio.h>

int main() {
    int numbers[] = {10,20,30,40,9};
    int even = 0;
    int odd = 0;
    int length = sizeof(numbers) / sizeof(numbers[0]);
    
    for (int i = 0; i < length; i++) {
        if (numbers[i] % 2 == 0) {
            even += numbers[i];
        } else {
            odd += numbers[i];
        }
    }
    
    printf("Sum of even elements: %d\n", even);
    printf("Sum of odd elements: %d\n", odd);
    
    return 0;
}
