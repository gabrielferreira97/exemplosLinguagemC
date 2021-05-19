#include <stdio.h>
#include <stdlib.h>
int main() {

	float a, b, c, d, media;

	printf("Insira a media da primeira unidade: ");
	scanf("%f", &a);
	printf("Insira a media da segunda unidade: ");
	scanf("%f", &b);
	printf("Insira a media da terceira unidade: ");
	scanf("%f", &c);
	printf("Insira a media da quarta unidade: ");
	scanf("%f", &d);

	media = (a + b + c + d) / 4;

	printf("A sua media e: %.2f\n", media);
	system("PAUSE");
	return 0;
}
