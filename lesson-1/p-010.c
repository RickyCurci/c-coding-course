#include <time.h>
#include <stdio.h>
#include <stdlib.h> 

// es: 10 - date due stringhe determinare quale fra queste viene prima in ordine alfabetico.
int ordine_alfabetico() {
	char a[15]; char b[15]; 
	int i;int j; int c_uno; int c_due;
	
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzw";
	scanf("%s", a); scanf("%s", b);
	
	for (i=0; i<15; i++){
		if (a[i] != b[i]) {
			for (j=0; j<27; j++) {
				if (alphabet[j] == a[i]) {
					c_uno = j; 
				}else if (alphabet[j] == b[i]) {
					c_due = j;
				}; if (c_due > c_uno) {
					printf("%s %s", a,b);	
					break;
				} else if (c_uno > c_due) {
					printf("%s %s", b,a);
					break;
				};
			}

		} else if (a[i] == b[i]) {
			continue; 
		}
	}	
		
	return 0;

};

int int main() {
	ordine_alfabetico();
	return 0;
}