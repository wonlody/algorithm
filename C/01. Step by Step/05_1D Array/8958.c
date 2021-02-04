/*
   problem 8958 : OX퀴즈
   BAEKJOON >> ICPC > Regionals > Asia Pacific > Korea > Asia Regional - Seoul 2005 A번
   baekjoon, jh82582
   
   OX 퀴즈의 결과를 일차원 배열로 입력받아 점수를 구하는 프로그램
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, score, tot;
    char ox[81];
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", ox);
        
        score = 1, tot = 0;
        for (int j = 0; j < strlen(ox); j++)
        {
            if (ox[j] == 'O')
            {
                tot += score;
                score++;
            }
            else if (ox[j] == 'X')
            {
                score = 1;
            }
        }
        printf("%d\n", tot);
    }

    return 0;
}
