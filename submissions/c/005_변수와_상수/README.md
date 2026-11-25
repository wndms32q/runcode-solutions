# 5. 변수와 상수

**난이도:** ★☆☆☆☆

## 문제

나이 변수에 20을 저장했다가 21로 변경하고, 절대 변하지 않는 최대 점수 상수 100을 선언한 뒤 아래와 같이 출력하세요.

[입력] 없음
[출력]
변경된 나이: 21
상수 값: 100

## 내 코드

```c
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
```

## 모범 답안

```c
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
```

_해결일: 2026-11-25_