#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int A[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%d",&A[i]);
        }
        int max = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            int count = 0;
            for (int j = 0; j < i; j++)
            {
                if (A[j] % A[i] == 0)
                    count++;
            }
            if (max <= count)
                max = count;
        }
        printf("%d\n",max);
    }
}

