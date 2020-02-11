#include<stdio.h>

int main(void)
{
int x=1,count=0;
while(x)
{
	x<<=1;count++;
}
printf("Size is %d\n",count);
return 0;
}
