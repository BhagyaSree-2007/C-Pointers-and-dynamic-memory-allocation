/*Write a C program to find greatest of n numbers using dynamic memory allocation*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int *a,i,n,max;
   printf("Enter the number of elements:");
   scanf("%d",&n);
   a=(int *)malloc(n*sizeof(int));
   if(a==NULL)
   {
      printf("Memory not allocated!\n");
      exit(0);
   }
   printf("Enter %d elements:\n",n);
   for (i=0;i<n;i++)
   {
      scanf("%d",a+i);
   }
   max=*a;
   for(i=0;i<n;i++)
   {
      if(max<*(a+i))
         max=*(a+i);
   }
   printf("Greatest number is %d\n",max);
   free(a);
   return 0;
}
