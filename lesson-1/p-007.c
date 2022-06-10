#include <time.h>
#include <stdio.h>
#include <stdlib.h> 



// es: 7 - dati due interi calcola il loro MDC (consiglio l’algoritmo di Euclide)
int mcd() {

	// inserisci 2 numeri > 1 e a > b
	int a; int b; int r;
	scanf("%d", &a); scanf("%d", &b);
	if (a > b && a > 1 && b > 1) {
		r = a%b;
		if (r != 0) {
			while (r != 0) {
				if (b%r == 0) {
					printf("\n%d",r);
					return 0;
				};
				r = b%r; 
			};
		} else {
			printf("\n%d", a/b);
		} 
	};
	return 0;
}

int main() {
	mcd();
	return 0;
}