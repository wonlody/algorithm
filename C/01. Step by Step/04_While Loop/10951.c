/*
   problem 10951 : A+B-4
   BAEKJOON >> baekjoon, djm03178
   
   두 정수 A, B를 입력받아, A+B를 출력하는 프로그램
*/

#include <stdio.h>

int main(void)
{
    int a, b;
    
    while (scanf("%d %d", &a, &b) != EOF)
    {
        printf("%d\n", a+b);
    }
    
    return 0;
}
