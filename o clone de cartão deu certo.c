# include<stdio.h>
int main()
{
	int total_ciclo1 = 0;
	unsigned long long int cartao = 403600000000014;
	do
	{
		cartao /= 10;
		total_ciclo1 += (cartao%10)*2;
		printf("t%d\n", total_ciclo1);
		cartao /= 10;
	}while(cartao > 0);
	printf("t%d\n", total_ciclo1);
}
