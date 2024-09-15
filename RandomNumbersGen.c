
/* RandomNumbersGen.c */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>  

int random_function(int max)
{
	int x;
	x = rand() % max + 1;
	return x;
}

int main()
{
	int random;
	int max;	
	
	printf("Write a max value : \n");
	fflush(stdout);
	scanf("%d", &max);	

	srand(getpid());	
	random = random_function(max);
	
	printf("Your random number %d\n", random);

	return 0;
}
