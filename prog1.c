#include<stdio.h>
main()
{
	int pid;
	printf("demo of zombie process");
	pid = fork();
	if(pid==0)
	{
		
		printf("\nchild process pid  ");
		printf("\nmore moye");


