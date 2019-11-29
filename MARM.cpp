#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        long long int k;
        scanf("%d %lld", &n, &k);
        int arr[3*n], arr1[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            arr1[i] = arr[i];
        }

        //  for (int i = 0; i < k; i++)
        //  {
        //      int a = arr1[i % n];
        //      int b = arr1[n - (i % n) - 1];
        //      arr1[i % n] = a ^ b;
        //  }
        //  cout << "correct solution is :" << endl;
        //  for (int i = 0; i < n; i++)
        //  {
        //      printf("%d ", arr1[i]);
        //  }
        //  printf("\n");

        /*
        
        if (K/n) = 3*some_no then after performing XOR operations we get the same array
        INPUT:
        n = 6, k = 18
        arr = {1,2,3,4,5,6}

        OUTPUT:
        1 2 3 4 5 6
        
        */
       
        int z = k % (n * 3);
        //cout << "Z = " << z << endl;

        for (int i = 0; i < z; i++)
        {
            int a = arr[i % n];
            int b = arr[n - (i % n) - 1];
            arr[i % n] = a ^ b;
        }
        
        if(n%2 != 0 && k >=(n+1)/2)
        {
            arr[(n-1)/2] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}