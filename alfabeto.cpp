#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	for(char ch='a'; ch <= 'z'; ch++){
	printf("%c \n", ch);
	
	}	

	system("PAUSE");
	return 0;
}
