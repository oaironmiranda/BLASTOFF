#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float c, d, v;

    printf ("Informe a distância em km: ");
    scanf ("%f", &d);
    
    printf("Informe o gasto de combustivel em l: ");
    scanf("%f", &v);

    c = d / v;

    printf ("O consumo médio é de %.1f km/l\n", c);
    system ("pause");
    
	return 0;
}
