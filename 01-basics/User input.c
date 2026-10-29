
#include <stdio.h>

int main() {
    int age = 0;
    float gpa = 0.0f;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    printf("%d\n", age);
    printf("%f\n", gpa);

    return 0;
}
