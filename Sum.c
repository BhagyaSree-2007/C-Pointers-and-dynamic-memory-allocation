/*Write a C program to find sum of n numbers using dynamic memory allocation*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int i,n;
   float *a,sum=0;
   printf("Enter the number of elements:");
   scanf("%d",&n);
   a=(float *)malloc(n*sizeof(float));
   if(a==NULL)
   {
      printf("Memory not allocated!\n");
      exit(0);
   }
   printf("Enter %d integers:\n",n);
   for (i=0;i<n;i++)
   {
      scanf("%f",a+i);
   }
   for(i=0;i<n;i++)
   {
      sum+=*(a+i);
   }
   printf("Sum=%f\n",sum);
   free(a);
   return 0;
}
