/*
   problem 15552 : 빠른 A+B
   BAEKJOON >> jh05013
   
   T줄에 각각 주어진 두 정수 A, B를 입력받아, A+B를 출력하는 프로그램
*/

#include <stdio.h>

int main(void)
{
    int t, a, b;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }
    
    return 0;
}
