#include <stdio.h>
#include <stdlib.h>



//APPROFONDIMENTO N.3
int somma_matrici_n_per_m() {
	int n = 2; int m = 3;
	int a[2][3] = {{2,3,4},{1,2,3}}; int b[2][3] = {{3,4,5},{6,7,8}};
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			printf("%d ",a[i][j]+b[i][j]);
		}
	}
}

int main() {
	somma_matrici_n_per_m();
	return 0;
}