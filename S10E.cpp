#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int N;
        scanf("%d", &N);
        int P[N+1];
        for (int i = 1; i <= N; i++)
        {
            scanf("%d", &P[i]);
        }

        int good_price = 1;
        for (int i = 2; i <= N; i++)
        {
            int flag = 1;
            for (int j = 1; j <= 5; j++)
            {
                if ((i - j) == 0)
                {
                    break;
                }
                else
                {
                    if (P[i] >= P[i - j])
                    {
                        flag = 0;
                        break;
                    }
                }
            }
            good_price += flag;
        }
        printf("%d\n", good_price);
    }
    return 0;
}