#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    bool fun = true;
    bool easy = false;
    printf("%d\n", fun);
    printf("%d\n", easy);
    printf("프로그래밍이 재미있나? %s\n", fun ? "Yes" : "No");
    printf("코딩이 쉬운가? %s\n", easy ? "Yes" : "No");
    return 0;
}