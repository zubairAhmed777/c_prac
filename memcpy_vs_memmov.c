/*Both memcpy and memove do similar things.

But to sight out one difference:*/

#include <memory.h>
#include <string.h>
#include <stdio.h>

char str1[7] = "abcdef";

int main()
{

   printf( "The string: %s\n", str1 );
   memcpy( (str1+6), str1, 10 );
   printf( "New string: %s\n", str1 );

   strcpy( str1,"aabbcc");//, sizeof("aabbcc") );   // reset string


   printf("\nstr1: %s\n", str1);
   printf( "The string: %s\n", str1 );
   memmove( (str1+6), str1, 10 );
   printf( "New string: %s\n", str1 );

return 0;
}

/*
gives:

The string: abcdef
New string: abcdefabcdefabcd
The string: abcdef
New string: abcdefabcdef
*/

