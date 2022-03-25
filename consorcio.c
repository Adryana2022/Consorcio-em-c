#include <stdio.h>
#include <stdlib.h>


int main(void) {
	
float valor_atual,saldo_devedor;
int total_prestacoes, prestacoes_pagas,abertas;

	
	printf("Fiquei sabendo que fez um consorcio: me fala de quantas prestacoes foi:\n");
	scanf("%d",&total_prestacoes);
	
	printf ("Quantas voce ja pagou?\n");
	scanf("%d",&prestacoes_pagas);

     
	printf ("Qual valor que voce paga ?\n");
	scanf("%f",&valor_atual);

    
	
	abertas = (total_prestacoes - prestacoes_pagas );
	
	saldo_devedor = (valor_atual*abertas);	
	
	printf ("Olá, voce ja pagou %d parcelas do seu consorcio,  faltam %d parcelas para serem pagas, seu saldo devedor e de %.6f :\n");

}
