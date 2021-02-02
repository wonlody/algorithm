/*
   problem 11022 : A+B-8
   BAEKJOON >> baekjoon, djm03178
   
   두 정수 A,B를 입력받아, A+B를 출력하는 프로그램
*/

#include <stdio.h>

int main(void)
{
    int t, a, b;
    scanf("%d", &t);

    for (int i = 1; i < t+1; i++)
    {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", i, a, b, a+b);
    }
    
    return 0;
}
