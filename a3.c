#include <stdio.h>
#include <stdlib.h>

int main(){
	int i = 1;
	int n = 10;
	float sum = 1;
	float avg = 1;

	while(i <= n) {

		printf("i = %d, sum = %.0f, avg = %.2f\n", i, sum, avg);
		i++;		
	sum += i;
	avg = sum/i;
	}
	return EXIT_SUCCESS;
}
