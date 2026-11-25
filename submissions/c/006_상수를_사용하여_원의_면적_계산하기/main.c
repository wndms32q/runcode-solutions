#include <stdio.h>
int main(void)
{
    const double PI = 3.14159;
    double r;
    scanf("%lf", &r);
    printf("원의 넓이: %.6f\n", PI * r * r);
    return 0;
}