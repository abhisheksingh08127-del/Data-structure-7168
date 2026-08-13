/* Enrollment no- 92500527168 */
/*8. Write a program to find Minimum and Maximum numbers from the
given array using Recursion.*/
#include <stdio.h>
#include<stdio.h>

void findMinMax(int arr[],int n,int index,int *min,int *max);
void main()
{
          int arr[100],n,i;
          int min,max;

           printf("\n Enter the Size of Array:");
              scanf("%d",&n);

              printf("\nEnter %d elements \n: ",n);

          for(i=0;i<n;i++)
          {

              scanf("%d",&arr[i]);

          }
      min = max=arr[0];

    findMinMax(arr, n, 1, &min, &max);

    printf("\nMinimum  = %d", min);
    printf("\nMaximum  = %d", max);

}
void findMinMax(int arr[], int n, int index, int *min, int *max)
{
    if(index == n)
    {
        return;
    }

      if(arr[index] < *min)
    {
        *min = arr[index];
    }

    if(arr[index] > *max)
    {
        *max = arr[index];
    }
    findMinMax(arr, n, index + 1, min, max);
}
