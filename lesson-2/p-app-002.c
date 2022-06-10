#include <stdio.h>
#include <stdlib.h>

// APPROFONDIMENTO N.2
int prodotto_matrici_n_per_m_per_m_per_p(){
	//int n; scanf("%d", &n); int m; scanf("%d", %m); int p; scanf("%d", &p);
	int n = 3; int m = 2; int p = 3; int sum;
	int a[3][2] = {{1,2},{3,4}, {5,6}}; int b[2][3] = {{1,2,3},{3,4,5}}; 

	for (int i=0; i<n; i++){
		for (int j=0; j<p; j++){
			sum = 0;
			for (int y=0; y<m; y++){
				sum = sum+a[i][y]*b[y][j];
			};	printf("%d ", sum);
		};
	};  
}

int main() {
	prodotto_matrici_n_per_m_per_m_per_p();
	return 0;
}