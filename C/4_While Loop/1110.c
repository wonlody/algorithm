/*
   problem 1110 : 더하기 사이클
   BAEKJOON >> baekjoon, doju, eric00513, jh05013
   
   정수 N을 입력받아, N의 사이클 길이를 구하는 프로그램
*/

#include <stdio.h>

int main(void)
{
    int n, new_n, cycle = 0;
    scanf("%d", &n);
    
    new_n = n;

    while (1)
    {
    	if (new_n < 10)
    	{
    		new_n = 11 * new_n;
    	}
    	else
        {
            new_n = (new_n % 10) * 10 + (new_n / 10 + new_n % 10) % 10;
        }

        cycle++;
        
        if (new_n == n)
        {
            printf("%d\n", cycle);
            break;
        }
    }
    
    return 0;
}
