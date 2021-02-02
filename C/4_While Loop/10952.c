/*
   problem 10952 : A+B-5
   BAEKJOON >> baekjoon, djm03178, jh05013
   
   두 정수 A, B를 입력받아, A+B를 출력하는 프로그램
*/

#include <stdio.h>

int main(void)
{
    int a, b;
    
    while (1)
    {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0)
        {
            break;
        }
        printf("%d\n", a+b);

    }
    
    return 0;
}
