 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>
 #include <conio.h>
 
 int main(){
 	setlocale(LC_ALL, "portuguese");
 	char ch = 's';
 	do {
 	system("CLS");
 	int qtd;
	float nota, media = 0;

	printf("Digite a quatidade de notas: ");
	scanf("%i", &qtd);
	
	for(int i = 1; i<=qtd ; i++){
		printf("Digite a %dº nota: ", i);
		scanf("%f", &nota);
		media += nota;
	}
 	media /= qtd;
 	
 	if(media>=0.0 && media<3.0){
 		printf("\nMédia = %.2f - Você está Reprovado!!\n\n", media);
	 }else if(media>=3.0 && media<7.0){
	 	printf("\nMédia = %.2f - Você está na Final!!\n\n", media);
	 	printf("Você Precisa tirar %.2f para ser aprovado!\n",10.0-media);
	 }else if(media>7.0 && media<10.0){
	 	printf("\nMédia = %.2f - Você está Aprovado!!\n\n", media);
	 }else {
	 	printf("\nMédia Incorreta!!\n\n");
	 }
 	printf("\nDeseja repetir o Programa?? (s-Sim | n-Não)");
 	ch = getche();
	 }while(ch=='s' || ch=='S');
	system("PAUSE");
	return 0;
 }
