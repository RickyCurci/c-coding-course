#include <stdio.h>
#include <stdlib.h>

//APPROFONDIMENTO N.1
int determinante_matrici_2_per_2() {
	//int n; scanf("%d", &n); int m; scanf("%d", %m); int p; scanf("%d", &p); 
	int a[2][2] = {{1,2},{3,4}}; int D = (a[0][0]*a[1][1])-(a[1][0]*a[0][1]);
	printf("%d", D); 

	
}; 

int main() {
	determinante_matrici_2_per_2();
	return 0;
}