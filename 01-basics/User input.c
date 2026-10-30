#include <stdio.h>

int main(){
    
    char collegeID[30]={0};
    int Age=0;
    float gpa=0.0f;
    char Name[30]={0};

    printf("Enter Your Name:  ");
    scanf("%s", &Name); 

    printf("Enter Your CollegeID: ");
    scanf("%s", &collegeID);

    printf("Enter Your Age: ");
    scanf("%d", &Age);

    printf("Enter Your GPA: ");
    scanf("%f", &gpa);

    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", Name);
    printf("College ID: %s\n", collegeID);
    printf("Age: %d\n", Age);
    printf("GPA: %.2f\n", gpa);


    return 0;
}

