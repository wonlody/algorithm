/*
   problem 10871 : X보다 작은 수
   BAEKJOON >> jh82582, thinksong1
   
   정수 N개로 이루어진 수열 A와 정수 X가 주어질 때, A에서 X보다 작은 수를 모두 출력하는 프로그램
*/

#include <stdio.h>

int main(void)
{
    int n, x, a;
    scanf("%d %d", &n, &x);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        
        if (a < x)
        {
            printf("%d ", a);
        }
    }
    
    return 0;
}
