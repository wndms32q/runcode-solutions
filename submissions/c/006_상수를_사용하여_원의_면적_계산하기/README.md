# 6. 상수를 사용하여 원의 면적 계산하기

**난이도:** ★☆☆☆☆

## 문제

원주율 PI를 3.14159 값을 가진 상수로 선언하고, 반지름을 입력받아 원의 넓이(PI × 반지름 × 반지름)를 소수점 여섯째 자리까지 출력하세요.

[입력] 반지름 (실수)
[출력]
원의 넓이: (넓이를 소수점 6자리로)

## 내 코드

```c
#include <stdio.h>
int main(void)
{
    const double PI = 3.14159;
    double r;
    scanf("%lf", &r);
    printf("원의 넓이: %.6f\n", PI * r * r);
    return 0;
}
```

## 모범 답안

```c
#include <stdio.h>
int main(void)
{
    const double PI = 3.14159;
    double r;
    scanf("%lf", &r);
    printf("원의 넓이: %.6f\n", PI * r * r);
    return 0;
}
```

_해결일: 2026-11-25_