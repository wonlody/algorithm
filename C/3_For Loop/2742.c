/*
   problem 2742 : 기찍 N
   BAEKJOON >> baekjoon, rory143
   
   자연수 N이 주어졌을 때, N부터 1까지 한 줄에 하나씩 출력하는 프로그램
*/

#include <stdio.h>

int main(void)
{
    long n;
    scanf("%ld", &n);

    for (int i = n; i > 0; i--)
    {
        printf("%d\n", i);
    }
    
    return 0;
}
