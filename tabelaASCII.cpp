#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	for(int i=0; i<=255; i++){
	printf("%c \n", i);
	
	}	

	system("PAUSE");
	return 0;
}
