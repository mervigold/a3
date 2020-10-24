#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 1;
	int n = 50;
	int sum = 1;
	int avg = 1;

	while(n >= 0) {
		if(sum%i == avg && avg*i == sum){
	printf("i = %d, sum = %d, avg = %d\n", n, sum, avg);
	}
	n++;
}
	return EXIT_SUCCESS;
}
