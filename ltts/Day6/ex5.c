#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

void swapFields(struct Student* s1, struct Student* s2) {
    struct Student temp;

    strcpy(temp.name, s1->name);
    strcpy(s1->name, s2->name);
    strcpy(s2->name, temp.name);

    int rollNumberTemp = s1->rollNumber;
    s1->rollNumber = s2->rollNumber;
    s2->rollNumber = rollNumberTemp;

    float marksTemp = s1->marks;
    s1->marks = s2->marks;
    s2->marks = marksTemp;
}

int main() {
    struct Student student1;
    struct Student student2;

    printf("Enter details for Student 1:\n");
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Roll Number: ");
    scanf("%d", &student1.rollNumber);
    printf("Marks: ");
    scanf("%f", &student1.marks);

    printf("\nEnter details for Student 2:\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Roll Number: ");
    scanf("%d", &student2.rollNumber);
    printf("Marks: ");
    scanf("%f", &student2.marks);

    printf("\nBefore swapping:\n");
    printf("Student 1: %s, Roll Number: %d, Marks: %.2f\n", student1.name, student1.rollNumber, student1.marks);
    printf("Student 2: %s, Roll Number: %d, Marks: %.2f\n", student2.name, student2.rollNumber, student2.marks);

    swapFields(&student1, &student2);

    printf("\nAfter swapping:\n");
    printf("Student 1: %s, Roll Number: %d, Marks: %.2f\n", student1.name, student1.rollNumber, student1.marks);
    printf("Student 2: %s, Roll Number: %d, Marks: %.2f\n", student2.name, student2.rollNumber, student2.marks);

    return 0;
}
