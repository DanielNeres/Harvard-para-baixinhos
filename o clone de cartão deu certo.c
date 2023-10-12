# include<stdio.h>
int main()
{
	int total_ciclo1 = 0;
	unsigned long long int cartao = 403600000000014;
	do
{
	cartao /= 10;
	ultimo_numero = (cartao%10)*2;
	if(ultimo_numero < 10){
	total_ciclo1 += ultimo_numero;
	}else{
	total_ciclo1 += ((ultimo_numero%10) + (ultimo_numero/10));
	}
	printf("t%d\n", total_ciclo1);
	cartao /= 10;
}while(cartao > 0);
}
