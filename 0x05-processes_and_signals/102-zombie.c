#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int infinite_while(void);

/**
* main - function that creates 5 zombie processes
* Return: Always succes
*/

int main(void)
{
	pid_t zombie_PID;
	unsigned int i = 0;

	while (i < 5)
	{
		zombie_PID = fork();
		if (zombie_PID == 0)
			exit(0);
		else
		{
			printf("Zombie process created, PID: %d\n", zombie_PID);
			i++;
		}
	}
	infinite_while();

	return (EXIT_SUCCESS);
}

/**
* infinite_while - function that creates an
* infinite while loop of sleep function
* Return: Always success (0)
*/

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}
