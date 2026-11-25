# 7. 자료형의 크기와 sizeof 연산자

**난이도:** ★☆☆☆☆

## 문제

char, int, double 자료형의 크기와 int형 변수 num의 크기를 바이트 단위로 아래와 같이 출력하세요. (64비트 리눅스 기준: char=1, int=4, double=8)

[입력] 없음
[출력]
char 자료형의 크기: 1 바이트
int 자료형의 크기: 4 바이트
double 자료형의 크기: 8 바이트
num 변수의 크기: 4 바이트

## 내 코드

```c
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
```

## 모범 답안

```c
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
```

_해결일: 2026-11-25_