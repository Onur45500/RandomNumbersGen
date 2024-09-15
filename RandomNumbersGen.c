
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
	
	printf("%d\n", getpid());	

	srand(getpid());	
	random = random_function(10);
	
	printf("Your random number %d\n", random);

	return 0;
}
