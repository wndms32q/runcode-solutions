# 9. bool 형과 조건연산자

**난이도:** ★☆☆☆☆

## 문제

논리형 변수 두 개를 선언해 각각 참(true)과 거짓(false)을 저장하고, 정수 표현(1/0)과 Yes/No 문장을 아래와 같이 출력하세요.

[입력] 없음
[출력]
1
0
프로그래밍이 재미있나? Yes
코딩이 쉬운가? No

## 내 코드

```c
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
```

## 모범 답안

```c
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
```

_해결일: 2026-11-25_