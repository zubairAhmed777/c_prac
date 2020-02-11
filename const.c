#include<stdio.h>
#include<unistd.h>

const int y=10;

int main(void)
{

const int x=7;

printf("PID=%d\n",getpid());
printf("local x=%p\t global y=%p\n",&x,&y);

getchar();

return 0;
}
