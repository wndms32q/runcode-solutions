#include <stdio.h>
int main(void)
{
    int num = 0;
    printf("char 자료형의 크기: %zu 바이트\n", sizeof(char));
    printf("int 자료형의 크기: %zu 바이트\n", sizeof(int));
    printf("double 자료형의 크기: %zu 바이트\n", sizeof(double));
    printf("num 변수의 크기: %zu 바이트\n", sizeof num);
    return 0;
}