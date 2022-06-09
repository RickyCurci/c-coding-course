#include <time.h>
#include <stdio.h>
#include <stdlib.h> 

// es: 9 - calcola il fattorale n!
int fattoriale() {
	int n; int i; 

	scanf("%d", &n); 
	for (i=n-1; i > 0; i--) {
		n = n*i;
	};

	printf("%d", n);
	return 0; 

};

int main() {
	fattoria();
	return 0;
}