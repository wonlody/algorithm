/*
   problem 10869 : 사칙연산
   BAEKJOON
   
   두 자연수 A와 B를 입력받아, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램
*/

#include <stdio.h>

int main(void)
{
    long a, b;
    scanf("%ld %ld", &a, &b);
    printf("%ld\n", a+b);
    printf("%ld\n", a-b);
    printf("%ld\n", a*b);
    printf("%ld\n", a/b);
    printf("%ld\n", a%b);
    
    return 0;
}
