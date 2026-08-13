/* Enrollment no- 92500527168 */
/*8. Write a program to find Minimum and Maximum numbers from the
given array .*/

#include <stdio.h>
#include<stdio.h>

void main()
{
          int a[10],i,large,small;

          for(i=0;i<10;i++)
          {
              printf("\n Enter the number %d of A:",i+1);
              scanf("%d",&a[i]);

          }
          large=a[0];
          for(i=0;i<10;i++)
          {

              if(large<a[i])
              {
                  large=a[i];
              }

          }
           printf("The largest number is %d\n",large);

          small=a[0];
          for(i=0;i<10;i++)
          {

              if(small>a[i])
              {
                  small=a[i];
              }

          }
           printf("The smallest number is %d\n",small);

}


