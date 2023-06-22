#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initialize(struct Student* students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        students[i].rollno = 0;
        strcpy(students[i].name, "");
        students[i].marks = 0.0;
    }
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    getchar(); 

    struct Student* students = malloc(numStudents * sizeof(struct Student));

    initialize(students, numStudents);

    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        
        printf("Roll No: ");
        scanf("%d", &students[i].rollno);
        getchar();
        
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; 
        
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        getchar(); 
    }

    printf("\nInitialized student data:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    free(students); 

    return 0;
}
