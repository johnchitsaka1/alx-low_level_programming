#include <stdio.h>
#include <time.h>
/**
 *main-generates random number and prints it's sign
 *
 *return - 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n>0){
		printf("n is positive\n");
	}
	else if (n<0){
		printf("n is negative\n");
	}else{
		printf("n is zero");
	}
	return (0);

}
