#include <stdio.h>
#include <stdlib.h>

int main(){
	int i = 1;
	int n = 10;
	float sum = 1; //laut angebe ein float 
	float avg = 1; //laut angebe ein float 

	while(i <= n) {
		printf("i = %d, sum = %.0f, avg = %.2f\n", i, sum, avg); //.0f = float ohne Nachkommastelle  und .2f = float mit 2
		i++;	// i wird um 1 erhöt	
		sum += i; // summe wird die summe + 1 (sum = sum + i)
		avg = sum/i; // durchschnitt wird berechnet durch summe geteilt durch i
	}
	return EXIT_SUCCESS;
}
