#include <stdio.h>
int main(void)
{
    int age = 20;
    age = 21;
    const int MAX_SCORE = 100;
    printf("변경된 나이: %d\n", age);
    printf("상수 값: %d\n", MAX_SCORE);
    return 0;
}