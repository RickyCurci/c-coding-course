#include <time.h>
#include <stdio.h>
#include <stdlib.h> 

// es: 8 - genera casualmente 10 interi stampali e calcola il loro massimo e il loro minimo.
int max_min() {

	int n[10+1]; int i; int min; int max; srand(time(NULL));
	for (i=0; i<10; i++) {
		n[i] = rand()%100 + 1;
		printf("%d ", n[i]);
	};
	
	min = n[0]; max = n[0];

	for (i=1; i<10; i++) {
		if (n[i] <= min) {
			min = n[i];
		} else if (n[i] >= max) {
			max = n[i];
		};
	};

	printf("\n%d  %d", min, max);
	return 0;

}


int main() {
	max_min();
	return 0;
}