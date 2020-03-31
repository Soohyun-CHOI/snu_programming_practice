#include <stdio.h>

int main(void)
{
    float radius;
    float round;

    scanf("%f", &radius);

    round = 2 * 3.14 * radius;
    printf("원의 둘레는 %f 입니다.", round);

    return 0;
}