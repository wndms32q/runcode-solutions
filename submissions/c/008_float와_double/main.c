#include <stdio.h>
int main(void)
{
    float rf = 5.0f, pf = 3.14159265359f;
    double rd = 5.0, pd = 3.14159265359;
    float areaF = rf * rf * pf;
    double areaD = rd * rd * pd;
    printf("원의 면적 (float): %.7f\n", areaF);
    printf("원의 면적 (double): %.12f\n", areaD);
    return 0;
}