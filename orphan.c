#include<stdio.h>
main()
{
	int pid;
	printf("\ndemo of orphan process\n");
	pid=fork();
	if(pid==0)
	{
		printf("\nchild process pid=%d",getpid());
	        printf("\nchild process pid(from child)=%d\n",getpid());
		sleep(10);
	        printf("\nchild process pid=%d",getpid());
                printf("\nparents process pid(from child)=%d\n",getpid());
	}
	else if(pid>0)
		printf("\nchild process pid=%d",getpid());
	else
		printf("error in creation\n");
}
