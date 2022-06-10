#include <stdio.h>
#include <stdlib.h>

//APPROFONDIMENTO N.4
int determinante_n_per_n(){
	int k = 2; int m[2][2] = {{1,2},{3,4}}; 
	int d; int a; d=1; a=1;
	for (int i=-1; i<k-1;i++){
		for (int j=-1;j<k-1;j++){
			d = d*m[i][j];
			a = a*m[i][j-1];
		}
	} printf("%d",d - a); 
}


int main() {
	determinante_n_per_n();
	return 0;
	
}