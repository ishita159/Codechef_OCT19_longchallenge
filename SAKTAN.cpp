#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int N, M, Q;
        scanf("%d %d %d", &N, &M, &Q);
        int R[N + 1], C[M + 1];
        memset(R, 0, (N + 1) * sizeof(R[0]));
        memset(C, 0, (M + 1) * sizeof(C[0]));
        while (Q--)
        {
            int xR, xC;
            scanf("%d %d", &xR, &xC);
            R[xR]++;
            C[xC]++;
        }
        long long int even1 = 0, odd1 = 0, even2 = 0, odd2 = 0;
        for (int i = 1; i <= M; i++)
        {
            if (C[i] & 1)
            {
                odd1++;
            }
            else
            {
                even1++;
            }
        }
        for (int i = 1; i <= N; i++)
        {
            if (R[i] & 1)
            {
                odd2++;
            }
            else
            {
                even2++;
            }
        }
        long long int count = (odd1*even2) + (odd2*even1);
        printf("%lld\n",count);
    }
    return 0;
}