
/*
 * ===============================================================
 * Autor:             Matheus V. Costa
 * Data de criação:   02/05/2019
 * Última modificação: 23/11/2024
 * ===============================================================
 */

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#define tam 30

struct TpApostas
{
	int dia,mes,ano,numeros[7];
};


void GeraArquivo(char NomeArquivo[tam])
{
	FILE *arq = fopen(NomeArquivo,"w");
	TpApostas Apostas;
	char op;
	do
	{
		printf("\ndata ->(dd/mm/aa): ");
	scanf("%d/%d/%d",&Apostas.dia,&Apostas.mes,&Apostas.ano);

	printf("numeros das apostas");
	for(int i = 0;i<7;i++)
		scanf("%d",&Apostas.numeros[i]);
	printf("Deseja cadatrar essas aposta? (S/N)\n");
	fflush(stdin);
	op = toupper(getch());
	if(op == 'S')
	{
		fprintf(arq,"%d/%d/%d;",Apostas.dia,Apostas.mes,Apostas.ano);

			for(int i = 0;i<7;i++)
		fprintf(arq,"%d;",Apostas.numeros[i]);
		fprintf(arq,"\n");
	}

	printf("Deseja continuar cadastrando? (S/N)\n");
	fflush(stdin);
	op = toupper(getch());
	}while(op == 'S');
	fclose(arq);
}

void LeArquivo(char NomeArquivo[tam])
{
	FILE *arq = fopen(NomeArquivo,"r");
	int dia,mes,ano;
	TpApostas Apostas;
	int vet[7];
	if(arq == NULL)
	{
		printf("Arquivo n�o encontrado ou n�o existente...");
		getch();

	}
	else
	{
	    int cont = 1;
	    int qtd = 0;
		printf("****RODA DA FORTUNA****\n");
		printf("Informe as dezenas sorteadas: ");


		for(int i = 0;i<7;i++)
        {
            printf("%d: ",i+1);
         scanf("%d",&vet[i]);
        }

            fscanf(arq,"%d/%d/%d;",&Apostas.dia,&Apostas.mes,&Apostas.ano);
        for(int i = 0;i<7;i++)
        {
            fscanf(arq,"%d;",&Apostas.numeros[i]);
            if(Apostas.numeros[i] == vet[i])
                qtd++;
        }
        //rewind(arq);
		while(!feof(arq))
        {
            printf("Data: %d /%d /%d",Apostas.dia,Apostas.mes,Apostas.ano);
            for(int i = 0;i<7;i++)
                printf(" %d",Apostas.numeros[i]);
            switch(qtd)

            {
                case 3:
                    printf("-Trinca feita!");
                    break;
                case 4:
                    printf("-Quadra feita!");
                    break;
                case 5:
                    printf("-Quina Feita");
                default:
                    printf("-Nao houve jogo");

            }
            printf("\n");
            //getch();
            fscanf(arq,"%d/%d/%d;",&Apostas.dia,&Apostas.mes,&Apostas.ano);
            qtd = 0;
            for(int i = 0;i<7;i++)
        {
            fscanf(arq,"%d;",&Apostas.numeros[i]);
            if(Apostas.numeros[i] == vet[i])
                qtd++;
        }

        }




	}



}

int main()
{

    //GeraArquivo("Arquivo.txt");

	LeArquivo("Arquivo.txt");

}
