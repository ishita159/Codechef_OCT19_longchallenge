#include <bits/stdc++.h>
using namespace std;

#define MAX 1000001

void IncrementDivisors(int n, int arr[])
{
    // Note that this loop runs till square root
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            // If divisors are equal, increment only one
            if (n / i == i)
            {
                arr[i]++;
                //printf("%d ", i);
            }

            else // Otherwise increment both
            {
                arr[i]++;
                arr[n / i]++;
                //printf("%d %d ", i, n / i);
            }
        }
    }
}

//Time Complexity : O(sqrt(n))

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int A[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &A[i]);
        }

        int Factors[MAX], Star_value[MAX];
        memset(Factors, 0, MAX * sizeof(Factors[0]));
        memset(Star_value, 0, MAX * sizeof(Star_value[0]));

        for (int i = 0; i < n; i++)
        {
             Star_value[A[i]] = Factors[A[i]];
             //cout << "Star value of " << A[i] << "is " << Star_value[A[i]] << endl;
             IncrementDivisors(A[i], Factors);
        }

        cout << *max_element(Star_value, Star_value + MAX) << endl;
    }
    return 0;
}