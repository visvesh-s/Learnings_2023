#include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    float pmarks, mmarks, cmarks;
    float tmarks, percentage;
    
        printf("Enter Roll No: ");
    scanf("%d", &rollNo);
    
        printf("Enter Name (including initials): ");
    scanf(" %[^\n]s", name);
    
        printf("Enter Marks of Physics: ");
    scanf("%f", &pmarks);
    
    printf("Enter Marks of Math: ");
    scanf("%f", &mmarks);
    
    printf("Enter Marks of Chemistry: ");
    scanf("%f", &cmarks);
    
        tmarks = pmarks + mmarks + cmarks;
    percentage = (tmarks / 300) * 100;
    
    printf("\n----- Student Summary -----\n");
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", pmarks);
    printf("Math Marks: %.2f\n", mmarks);
    printf("Chemistry Marks: %.2f\n", cmarks);
    printf("Total Marks: %.2f\n", tmarks);
    printf("Percentage: %.2f%%\n", percentage);
    
    return 0;
}
