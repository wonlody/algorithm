/*
   problem 10430 : 나머지
   BAEKJOON >> baekjoon, eric00513
   
   세 수 A, B, C를 입력받아, (A+B)%C, ((A%C) + (B%C))%C, (A×B)%C, ((A%C) × (B%C))%C를 출력하는 프로그램
*/

#include <stdio.h>

int main(void)
{
    long a, b, c;
    scanf("%ld %ld %ld", &a, &b, &c);
    printf("%ld\n", (a+b)%c);
    printf("%ld\n", ((a%c)+(b%c))%c);
    printf("%ld\n", (a*b)%c);
    printf("%ld\n", ((a%c)*(b%c))%c);
    
    return 0;
}
