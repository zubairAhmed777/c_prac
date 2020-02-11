#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


void fun(void)
{
printf("In %s\n",__func__);
exit(1);
}

int main(void)
{
int status;
printf("In %s\n",__func__);
int pid=fork();
if (pid==0)
{
	printf("In child\n");
	exit(7);
}
else
{
	printf("After fun()\n");
	wait(&status);
	printf("Status is %d\n",status >>8);
	getchar();
	return 0;
}
}

