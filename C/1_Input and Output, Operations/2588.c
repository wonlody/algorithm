/*
   problem 2588 : 곱셈
   BAEKJOON >> Olympiad > 한국정보올림피아드 > 한국정보올림피아드시․도지역본선 > 지역본선 2005 > 초등부 2번
   
   (세 자리수) × (세자리수) = (3) + (4) + (5) = (6)
*/

#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d\n", a*(b%10));
    printf("%d\n", a*((b%100)/10));
    printf("%d\n", a*(b/100));
    printf("%d\n", a*b);
    
    return 0;
}
