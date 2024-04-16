#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int f1 = 0, f2 = 0, s = 0, n = 0;
	printf("Voce gostaria de somar entre quais numeros?(digite o primeiro entre os quais voce gostaria de somar):");
	scanf("%i", &f1);
	printf("Digite o ultimo numero entre os valores q vc gostaria de somar:");
	scanf("%i", &f2);
	n = f1;
	while (n <= f2) {
			if ((n % 3 == 0) || (n % 5 == 0)) {
				s = s + n;
			}
			n += 1;
	}
	printf("A soma dos multiplos de 3 e 5 entre os escolhidos e: %d\n ", s);
	return 0;
}