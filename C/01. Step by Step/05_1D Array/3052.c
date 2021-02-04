/*
   problem 3052 : 나머지
   BAEKJOON >> Contest > Croatian Open Competition in Informatics > COCI 2006/2007 > Contest #1 1번
   baekjoon, adfsfsf
   
   수 10개를 입력받아 이를 42로 나눈 나머지를 구하고, 서로 다른 값이 몇 개 있는지 출력하는 프로그램
*/

#include <stdio.h>

int main(void)
{
    int num, cnt=0;
    int rest[10] = {0, };

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num);        
        rest[i] = num % 42;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (rest[i] == rest[j])
            {
                cnt++;
                break;
            }
        }
    }
    printf("%d\n", 10-cnt);

    return 0;
}
