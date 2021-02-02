/*
   problem 2741 : N 찍기
   BAEKJOON >> baekjoon, rory143
   
   자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램
*/

#include <stdio.h>

int main(void)
{
    long n;
    scanf("%ld", &n);

    for (int i = 1; i < n+1; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}
