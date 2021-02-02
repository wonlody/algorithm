/*
   problem 1008 : A/B
   BAEKJOON >> baekjoon, djm03178, jh05013
   
   두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램
*/

#include <stdio.h>

int main(void)
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%.9lf", a/b);
    
    return 0;
}
