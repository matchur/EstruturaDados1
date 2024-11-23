/*
 * ===============================================================
 * Autor:             Matheus V. Costa
 * Data de criação:   02/05/2019
 * Última modificação: 23/11/2024
 * ===============================================================
 */

#include<unistd.h>
#include<time.h>
#include<conio.h>
#include<ctype.h>
#include<locale.h>
#include<windows.h>
#include "TAD_PILHA.h"




char menu()
{
	char op;
	system("cls");
	printf("[A] - Inicializar\n");
	printf("[B] - Inserir\n");
	printf("[C] - Retirar\n");
	printf("[D] - Elemento do topo\n");
	printf("[E] - Exibe PILHA\n");
	printf("[F] - Exercicio 1 ED1\n");
	printf("[G] - Exercicio 2 ED1\n");
//	printf("[H] - Exercicio 3 ED1\n");
    printf("[H] - Exercicio 4 ED1\n");
    printf("[I] - Exercicio 5 ED1\n");
    printf("[J] - Exercicio 7 ED1\n");
    printf("[K] - Exercicio 8 ED1\n");
    printf("[L] - Exercicio 3 ED1\n");
	printf("------------------------\n");
	printf("Pressione a op��o desejada\n");
	return op = toupper(getch());

}
void RetornaArquivoTXT(FILE *arq)
{


}

void exercicio8()
{
    TpPilhaI H[2];
    int o = 0,a = 1,d = 2,k; //index
    int num,i = 0;
    for(int i = 0;i<3;i++)
        inicializaI(H[i]);





    do
    {
    system("cls");
    printf("-Torre de Hanoi-\n");
    printf("Digite quantas mexirica quer (Max: %d Min: 3): \n",maxpilha);
    scanf("%d",&num);
    }while(num > maxpilha || num < 3);

    for(int i = num;i>0;i--)

    mov = (2^num) - 1;
    while(i != mov)
    {
        if(vazia(H[d]) || elementoTopoI(H[o]) < elementoTopoI(H[d]))
        {
            insereI(H[d],retiraI(H[o]));
           i++;
        }
        else
           if(vazia(H[a]) || elementoTopoI(H[o]) < elementoTopoI(H[a]))
            {
                insereI(H[a],retiraI(H[o]));
                i++;
            }
            else
              if( )


    }




    printf("Aperte uma tecla para passar tudo para t3");
    getch();


}
int exercicio7()
{
    TpPilha p;
    int i;
    char palavra[10];
    inicializa(p);

    printf("Digite a palavra: ");
    scanf("%s",&palavra);

    for(i = 0;i < strlen(palavra);i++)
      insere(p,palavra[i]);

    i = 0;
    while(!vazia(p.TOPO))
        if(retira(p) != palavra[i++])
        {
            printf("Palavra n�o � palindroma :c");
             getch();
            return 0;
        }

            printf("palavra � palindroma :D");
             getch();


}


void exercicio5ed()
{
    TpPilhaI p,inv;

    int  numero;
    inicializaI(p);
    inicializaI(inv);
    printf("Coloque os numeros na pilha (0 para parar): ");
    do
    {
        printf("-> ");
        scanf("%d",&numero);
        if(numero!=0)
            insereI(p,numero);

    }while(numero!= 0);

    while(!vazia(p.TOPO))
        insereI(inv,retiraI(p));
    exibeI(inv);
    getch();
}
void exercicio4ed()
{
    srand(time(NULL));

    int numero,rondo,r;
    bool satisfazer;
    printf("informe a quantidade de pilhas que deseja: ");
    scanf("%d",&numero);

    TpPilha Vet[numero];
    for(int  i  = 0;i<numero;i++)
        inicializa(Vet[i]);

    while(!kbhit())
    {
        satisfazer = false;
        system("cls");
        for(int  i  = 0;i<numero;i++)
        {
         exibe(Vet[i]);
         printf("\n");
        }
        //Sleep(500);
        while(!satisfazer)
        {
        rondo = rand() % 2;
        r = rand()%numero;
        if(rondo == 1)
            if(!cheia(Vet[r].TOPO))
            {
                insere(Vet[r],'x');
                satisfazer = true;
            }

        else
            if(!vazia(Vet[r].TOPO))
            {
                retira(Vet[r]);
                satisfazer = true;
            }

        }



    }


}



/*
void Exercicio3ED(TpPilha p)
{
	TpPilha invert;
	TpPilhaI res;
	inicializaI(res);
	inicializa(invert);
	int num1,num2,aux;
	char oper;


	while(!vazia(p.TOPO))
		insere(invert,retira(p));


	while(!vazia(invert.TOPO))
	{
		aux = retira(invert);



		if(aux>0 && aux<10)
		{
			num1 = aux;
			num2 = retira(invert) - 48;
			oper = retira();
		   if(oper == 43)//+
		   	   insere(res,num1+num2);
		   		if(oper == 45)//-
		   			insere(res,num1-num2);
				   	if(oper == 42)//*
				   		insere(res,num1*num2);
				   		if(oper == 47)///
				   			insere(res,num1/num2);

		}
		  else
		  {
			  oper = aux;
			  num1 = retira(res);
			  num2 = retira(res);

			  if(oper == 43)//+
		   	   insere(res,num1+num2);
		   		if(oper == 45)//-
		   			insere(res,num1-num2);
				   	if(oper == 42)//*
				   		insere(res,num1*num2);
				   		if(oper == 47)///
				   			insere(res,num1/num2);

		  }


	}
	exibeI(res);
	return retira(res);


}
*/
void Exercicio2ED()
{
	int i = 0;
	char letra;
	TpPilha p1,aux;
	inicializa(p1);
	inicializa(aux);
	system("cls");
	printf("Fa�a uma fun��o que possibilite a exclus�o de um elemento qualquer da Pilha escolhido pelo Usu�rio.-\n");
	printf("\nInforme os (char) da pilha: ('x' para encerrar)\n");
	do
	{
		printf("%d: ",i);
		fflush(stdin);
		scanf("%c",&letra);
		if(letra != 'x')
			insere(p1,letra);
		i++;
	}while(letra != 'x');

	printf("Informe o elemento a ser excluido na pilha: ");
	fflush(stdin);
	scanf("%c",&letra);

	while(letra != elementoTopo(p1))
	insere(aux,retira(p1));
	retira(p1);

	while(!vazia(aux.TOPO))
		insere(p1,retira(aux));

	   exibe(p1);
	   getch();

}


void Exercicio1ED()
{
	int i = 0;
	char letra;
	TpPilha p1,p2,aux;
	inicializa(p1);
	inicializa(p2);
	inicializa(aux);
	system("cls");
	printf("-Ao receber duas Pilhas, retorne a concatena��o das mesmas na primeira Pilha.-");
	printf("\nInforme os valores da pilha 1: ('x' para encerrar)\n");

	do
	{
		printf("%d: ",i);
		fflush(stdin);
		scanf("%c",&letra);
		if(letra != 'x')
			insere(p1,letra);
		i++;
	}while(letra != 'x');
	i = 0;
	printf("\nInforme os valores da pilha 2: ('x' para encerrar)\n");
	do
	{
		printf("%d: ",i);
		fflush(stdin);
		scanf("%c",&letra);
		if(letra != 'x')
			insere(p2,letra);
		i++;
	}while(letra != 'x');

	while(!vazia(p2.TOPO))
		insere(aux,retira(p2));

	while(!vazia(aux.TOPO))
		insere(p1,retira(aux));
	printf("Concatena��o");
	exibe(p1);
	getch();

}


void inserirValor(TpPilha &p)
{
	char l;
	printf("Digite a letra que deseja inserir na pilha Principal: ");
	fflush(stdin);
	scanf("%c",&l);
	insere(p,l);

}


int main(int argc, char** argv)
{
    //setlocale(LC_ALL,"portuguese");
	char op;
	TpPilha p;
	do
	{
	op = menu();
		switch(op)
		{

			case 'A': //inicializar
				inicializa(p);
				break;

			case 'B': //inserir
				inserirValor(p);
				break;

			case 'C'://Retirar
				if(!vazia(p.TOPO))
					printf("Elemento [%c] retirado do topo com sucesso!...",retira(p));
				else
					printf("Lista vazia... impossivel retirar");

				printf(" \nPressione qualquer tecla p// continar");
				getch();
				break;
			case 'D'://elemento no topo
				if(!vazia(p.TOPO))
					printf("Elemento no topo -> %c",elementoTopo(p));
				else
					printf("Lista vazia... impossivel mostrar elemento do topo");

				printf(" \nPressione qualquer tecla p// continar");
				getch();
				break;

			case 'E'://exibe pilha
				if(!vazia(p.TOPO))
				exibe(p);
				else
				printf("Lista vazia... impossivel exibir pilha");

				printf(" \nPressione qualquer tecla p// continar");
				getch();
				break;

			case 'F'://Exercicio 1 ed
				Exercicio1ED();
				break;
			case 'G':
				Exercicio2ED();
				break;
			case 'H':
			    exercicio4ed();
				break;
			case 'I':
			    exercicio5ed();
                break;
            case 'J':
                exercicio7();
                break;
            case 'K':
                exercicio8();
                break;

		}



	}while(op != 27);




	return 0;
}
