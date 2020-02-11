#include<stdio.h>

//#define s 0

int main(void)
{
int a[5]={0};
int *ptr=a;
int (*ptr1)[5]=&a;

ptr++;
ptr1++;

int *p=&a+1;//jumps array size
#ifdef s
printf("Hello macro\n");
//use gcc -D <macro_name> <filename.c> to enable macro
#endif
int *p1=a+1;//jumps element size

printf("ptr=%p\tptr++=%p\n",a,ptr);
printf("ptr1=%p\tptr1++=%p\n",a,ptr1);

printf("a=%p\tp1=%p\n",a,p1);
printf("a=%p\tp=%p\n",a,p);

return 0;
}
