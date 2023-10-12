# include<stdio.h>
int main()
{
	int ultimo_numero, total_ciclo1 = 0, total_ciclo2 = 0;
	unsigned long long int cartao = 4003600000000014;
	do
	{
		cartao /= 10;
		ultimo_numero = (cartao%10)*2;
		if(ultimo_numero < 10){
		total_ciclo1 += ultimo_numero;
		}else{
		total_ciclo1 += ((ultimo_numero%10) + (ultimo_numero/10));
		}
		cartao /= 10;
	}while(cartao > 0);
	
	cartao = 4003600000000014;
	do
	{
		ultimo_numero = cartao%10;
		total_ciclo2 += ultimo_numero;
		cartao /= 100;
	}while(cartao > 0);
	
	if((total_ciclo1 + total_ciclo2)%10 == 0){
		printf("valido, pois a soma foi %d ", (total_ciclo1 + total_ciclo2));
	}else{
		printf("valido, pois a soma foi %d ", (total_ciclo1 + total_ciclo2));
	}
}
