#include <stdio.h>
#include<string.h>
int main()
{
   char s[1000], r[1000];
   int begin, end,len;
   printf("Enter the string\n");
   gets(s);
   end=strlen(s)-1;
    len=strlen(s);
   for (begin = 0; begin < len; begin++) {
      r[begin] = s[end];
      end--;
   }
   r[begin] = '\0';
   printf("The reverse of string %s\n", r);
   return 0;
}