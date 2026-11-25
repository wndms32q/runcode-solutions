# 8. float와 double

**난이도:** ★☆☆☆☆

## 문제

반지름 5.0인 원의 면적(원주율 3.14159265359)을 float형과 double형으로 각각 계산해, float 결과는 소수점 7자리, double 결과는 소수점 12자리로 출력하여 정밀도 차이를 확인하세요.

[입력] 없음
[출력]
원의 면적 (float): (float 계산 결과, 소수점 7자리)
원의 면적 (double): (double 계산 결과, 소수점 12자리)

## 내 코드

```c
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
```

## 모범 답안

```c
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
```

_해결일: 2026-11-25_