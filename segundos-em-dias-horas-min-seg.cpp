#include <stdlib.h>
#include <stdio.h>

int main(){
int seg, h, m, s, d;

printf("escreva a quantidade de segundos: ");
scanf("%d", &s);

d = h/24;
h = s/3600;
m = (s - (3600 * h))/60;
seg = (s - (3600*h)-(m*60));

printf("O numero de segundos equivale a: %d dias %dh %dm %ds\n", h, m, seg);

system("PAUSE");
return 0;
}
