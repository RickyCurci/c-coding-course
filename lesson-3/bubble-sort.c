#include <stdio.h>
#include <stdlib.h>


int bubble_sort(){
	float a[5] = {5,68,3,5,2};
	int size = sizeof a / sizeof *a; 
	for (int i=0;i<size;i++){
		for (int j=0;j<size-1;j++){
			if (a[j] >= a[j+1]){
				float k = a[j]; a[j]=a[j+1]; a[j+1]=k;
			}
		}
	} for (int y=0; y<5; y++){
		printf("%f ", a[y]);
	}
}

int main() {
	bubble_sort();
	return 0;
}