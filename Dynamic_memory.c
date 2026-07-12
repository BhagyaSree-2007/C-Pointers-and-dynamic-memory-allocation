/*Write a C program to perform getting n numbers 
from user, allocating memory, storing integers in allocated memory, 
displaying using pointer notation and free dynamically allocated memory*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int *a,i,n;
   printf("Enter the number of integers:");
   scanf("%d",&n);
   a=(int *)malloc(n*sizeof(int));
   if(a==NULL)
   {
      printf("Memory not allocated!\n");
      exit(0);
   }
   printf("Enter %d integers:\n",n);
   for (i=0;i<n;i++)
   {
      scanf("%d",a+i);
   }
   printf("\nYou entered:\n");
   for(i=0;i<n;i++)
   {
      printf("%d\t",*(a+i));
   }
   printf("\n");
   free(a);
   return 0;
}
