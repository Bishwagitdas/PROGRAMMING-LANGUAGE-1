#include<stdio.h>

int main()
{
    int a[100], n, i, key, count = 0;
    printf("Enter Array Size : " );
    scanf("%d",&n);
    printf("Enter Array Element : ", n );
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter Search Key: ");
    scanf("%d", &key);

    printf("\n");

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {

          count++;
        }
    }

  printf("\nFinal Result: %d Search Key appeared %d times.\n", key, count);

    printf("\n");

    return 0;
}
