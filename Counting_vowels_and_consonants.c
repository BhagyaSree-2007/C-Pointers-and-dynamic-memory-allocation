/*Write a C program to count vowels and consonants using pointers and dynamic memory allocation*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
   int size,v=0,c=0;
   char *str,*p;
   printf("Enter the number of elements of string:");
   scanf("%d",&size);
   str=(char *)malloc(size*sizeof(char));
   if(str==NULL)
   {
      printf("Memory not allocated!\n");
      exit(0);
   }
   printf("Enter a string:");
   getchar();
   fgets(str,sizeof(str),stdin);
   p=str;
   while(*p!='\0')
   {
      if(isalpha(*p))
      {
         if (*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
         {
            v++;
         }
         else
         {
            c++;
         }
      }
      p++;
   }
   printf("Vowels:%d\n",v);
   printf("Consonants:%d\n",c);
   free(str);
   return 0;
}
