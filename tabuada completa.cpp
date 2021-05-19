#include <stdio.h>

int main(){
	for(int j=1; j<=10; j++){
		printf("\n\tTabuada de %d\n", j);
	for(int i = 1; i<=10; i++){
		printf("\t%2d x %2d = %3d\n", j, i, i*j);
	}
	}	
	return 0;
}
