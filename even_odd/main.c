#include <stdio.h>
#include <stdlib.h>

void main()
 {
    int arr1[10], arr2[10], arr3[10];
    int i,j=0,k=0,n;

       printf("Input size of the array :");
       scanf("%d",&n);

       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }

    for(i=0;i<n;i++)
    {
	if (arr1[i]%2 == 0)
	{
	   arr2[j] = arr1[i];
	   j++;
	}
	else
	{
	   arr3[k] = arr1[i];
	   k++;
	}
    }

    printf("\nEven elements in array: : \n");
    for(i=0;i<j;i++)
    {
	printf("%d ",arr2[i]);
    }

    printf("\nEven elements in array: :\n");
    for(i=0;i<k;i++)
    {
	printf("%d ", arr3[i]);
    }
    printf("\n\n");
 }
