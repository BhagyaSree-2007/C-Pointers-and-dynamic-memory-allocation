/*Write a C program to search an element by linear search using dynamic memory allocation*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int *a,i,n,key,flag=0;
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
   printf("Enter key value to be searched:");
   scanf("%d",&key);
   for(i=0;i<n;i++)
   {
      if (*(a+i)==key)
      {
         flag=1;
         printf("Element found in index %d\n",i);
         break;
      }
   }
   if (flag==0)
   {
      printf("Element not found\n");
   }
   free(a);
   return 0;
}
