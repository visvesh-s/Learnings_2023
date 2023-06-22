#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double Volume(struct Box* box) {
    return box->length * box->width * box->height;
}

double sArea(struct Box* box) {
    return 2 * (box->length * box->width + box->length * box->height + box->width * box->height);
}

int main() {
    struct Box myBox;

    printf("Enter the length of the box: ");
    scanf("%lf", &myBox.length);

    printf("Enter the width of the box: ");
    scanf("%lf", &myBox.width);

    printf("Enter the height of the box: ");
    scanf("%lf", &myBox.height);

    struct Box* ptrBox = &myBox;

    double volume = Volume(ptrBox);
    printf("Volume of the box: %.2f\n", volume);

    double surfaceArea = sarea(ptrBox);
    printf("Total surface area of the box: %.2f\n", surfaceArea);

    return 0;
}
