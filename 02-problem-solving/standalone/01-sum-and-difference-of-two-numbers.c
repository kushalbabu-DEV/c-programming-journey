#include <stdio.h>

int main()
{
    int x, y;
    float z, m;

    scanf("%d %d", &x, &y);
    scanf("%f %f", &z, &m);

    int sum = x + y;
    int difference = x - y;

    float add = z + m;
    float subtraction = z - m;

    printf("%d ", sum);
    printf("%d\n", difference);
    printf("%.1f ", add);
    printf("%.1f", subtraction);

    return 0;
}