#include<stdio.h>

int g;
static int s =4;

int main(void)
{
{
int g=7;
static int s=7;
printf("local g=%d\ts=%d\n",g,s); 
}
printf("global g=%d\ts=%d\n",g,s); 

return 0;
}
