#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
main()
{
	pid_t pid;
	pid=fork();
	if(pid==0)
	{
		printf("child process\n");
	}
	else
		printf("parents process\n");
}
	
