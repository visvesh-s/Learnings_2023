#include <stdio.h>

struct Complex {
    double real;
    double imag;
};

void readc(struct Complex* c) {
    printf("Enter the real part: ");
    scanf("%lf", &(c->real));

    printf("Enter the imaginary part: ");
    scanf("%lf", &(c->imag));
}

void writec(struct Complex c) {
    printf("Complex number: %.2f + %.2fi\n", c.real, c.imag);
}

struct Complex addc(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

struct Complex multiplyc(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag * c2.real;
    return result;
}

int main() {
    struct Complex num1, num2, sum, product;

    printf("Reading the first complex number:\n");
    readc(&num1);

    printf("\nReading the second complex number:\n");
    readc(&num2);

    printf("\n");

    printf("The first complex number is: ");
    writec(num1);

    printf("The second complex number is: ");
    writec(num2);

    printf("\n");

    sum = addc(num1, num2);
    printf("Addition of the two complex numbers: ");
    writec(sum);

    product = multiplyc(num1, num2);
    printf("Multiplication of the two complex numbers: ");
    writec(product);

    return 0;
}
