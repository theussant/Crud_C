// Projeto Final.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

// Vars Globais.

char endereco [100] [50];
int idade [100];
float salario[100];
char nome [100] [50];
char cargo [100] [50];
int num;
int op = 0;

void cadastrar();
void listar();
void procurar();
void alterar();
void excluir();

int main(){
	
	// Comandos de apoio:
	setlocale(LC_ALL, "Portuguese");
	system("color F0");
	
	do{
		// Começo dos prints:
		printf("\n#-----------------------------------------------#\n");
		printf("\n#---------GERENCIAMENTO DE FUNCIONÁRIOS---------#\n");
		printf("\n#-----------------------------------------------#\n");
		printf("\n\nQual operação deseja gerenciar?\n");
		printf("\nOpção 1 = Cadastrar novos funcionários.\n");
		printf("\nOpção 2 = Mostrar a lista de funcionários cadastrados.\n");
		printf("\nOpção 3 = Buscar um funcionário específico.\n");
		printf("\nOpção 4 = Modificar o cadastro/registro de algum funcionário.\n");
		printf("\nOpção 5 = Apagar informações relacionadas a um funcionário.\n");
		printf("\nOpção 6 = Encerrar a sessão.\n");
		
		printf("\nDigite a opção desejada:\n");
		scanf("%d", &op);
		system("cls");	
	
		switch(op){
			case 1:
				cadastrar();
				break;
			case 2:
				listar();
				break;
			case 3:
				procurar();
				break;
			case 4:
				alterar();
				break;
			case 5:
				excluir();
				break;
		}
	}while(op!=6);
}

// Funções.
void cadastrar(){
	int quant;
	int i = 1;
	
	printf("\n#-----------------------------------------------#\n");
	printf("\n#------------CADASTRANDO FUNCIONÁRIOS-----------#\n");
	printf("\n#-----------------------------------------------#\n\n");
	printf("\nDigite a quantidade de funcionários que deseja cadastrar:\n");
	scanf("%d", &quant);
	while(i<=quant){
		printf("\nInsira o nome do funcionário:\n ");
		fflush(stdin);
		scanf("%s",&nome[num]);	
		printf("\nInsira a idade do funcionário:\n ");
		fflush(stdin);
		scanf("%d",&idade[num]);
		printf("\nInsira o endereço do funcionário:\n ");
		fflush(stdin);
		scanf("%s",&endereco[num]);
		printf("\nInsira o cargo do funcionário:\n ");
		fflush(stdin);
		scanf("%s",&cargo[num]);
		printf("\nInsira o salário do funcionário:\n ");
		fflush(stdin);
		scanf("%f",&salario[num]);
		i++;
		num++;
	
		printf("\nFuncionário(s) cadastrado(s) com sucesso!\n");
		getch();
		system("cls");
		
	}
}

void listar(){
	int i;
	printf("\n#-----------------------------------------------#\n");
	printf("\n#--------MOSTRANDO LISTA DE FUNCIONÁRIOS--------#\n");
	printf("\n#-----------------------------------------------#\n");
	for(i=0;i<102;i++){
		if(idade[i]>0){
			printf("Código do Funcionário: %d\nNome: %s\nIdade: %d\nEndereço: %s\nCargo: %s\nSalário: %.2f\n\n",i,nome[i],idade[i],endereco[i],cargo[i],salario[i]);
		} else {

		}
	}
	printf("Pressione ENTER ou ESPAÇO para voltar ao menu principal.");
	getch();
	system("cls");
}

void procurar(){
	int proc, cod;
	
	printf("\n#-----------------------------------------------#\n");
	printf("\n#--------------BUSCANDO FUNCIONÁRIOS------------#\n");
	printf("\n#-----------------------------------------------#\n\n");
	printf("Insira o código do funcionário: ");
	scanf("%d",&cod);
		
	if(idade[cod]>0){
		printf("Código do Funcionário: %d\nNome: %s\nIdade: %d\nEndereço: %s\nCargo: %s\nSalário: %.2f\n\n",cod,nome[cod],idade[cod],endereco[cod],cargo[cod],salario[cod]);
	} else {
		printf("Código inexistente!");
	}
	printf("Pressione ENTER ou ESPAÇO para voltar ao menu principal.");
	getch();
	system("cls");
}

void alterar(){
	int i,cod,opc;
	
	printf("\n#-----------------------------------------------#\n");
	printf("\n#----MODIFICANDO INFORMAÇÕES DE FUNCIONÁRIOS----#\n");
	printf("\n#-----------------------------------------------#\n");
	printf("Insira o código do funcionário que deseja alterar as informações: ");
	scanf("%d",&cod);
	
	if(idade[cod]>0){
		printf("Código do Funcionário: %d\n1. Nome: %s\n2. Idade: %d\n3. Endereço: %s\n4. Cargo: %s\n5. Salário: %.2f\n\n",cod,nome[cod],idade[cod],endereco[cod],cargo[cod],salario[cod]);
		printf("Escolha uma das seguintes opções para modificar: ");
		scanf("%d",&opc);
		if(opc==1){
			printf("Insira um novo nome para o funcionário: ");
			scanf("%s",&nome[cod]);
		}
		if(opc==2){
			printf("Insira uma nova idade para o funcionário: ");
			scanf("%d",&idade[cod]);
		}
		if(opc==3){
			printf("Insira um novo endereço para o funcionário: ");
			scanf("%s",&endereco[cod]);
		}
		if(opc==4){
			printf("Insira um novo cargo para o funcionário: ");
			scanf("%s",&cargo[cod]);
		}
		if(opc==5){
			printf("Insira um novo salario para o funcionário: ");
			scanf("%f",&salario[cod]);
		}
	} else {
		printf("Código inexistente!");
	}
	printf("Pressione ENTER ou ESPAÇO para voltar ao menu principal.");
	getch();
	system("cls");
}

void excluir(){
	int cod,ctz;
	printf("\n#-----------------------------------------------#\n");
	printf("\n#-----APAGANDO INFORMAÇÕES DE FUNCIONÁRIOS------#\n");
	printf("\n#-----------------------------------------------#\n");

	printf("Insira o código do funcionário que deseja alterar as informações: ");
	scanf("%d",&cod);
	
	if(idade[cod]>0){
		printf("Código do Funcionário: %d\n1. Nome: %s\n2. Idade: %d\n3. Endereço: %s\n4. Cargo: %s\n5. Salário: %.2f\n\n",cod,nome[cod],idade[cod],endereco[cod],cargo[cod],salario[cod]);
		printf("Tem certeza que deseja apagar essa conta? [1-Sim/2-Não]");
		scanf("%d",&ctz);
		
		if(ctz==1){
			idade[cod] = 0;
		}
		
	} else {
		printf("Código inexistente!");
	}
	printf("Pressione ENTER ou ESPAÇO para voltar ao menu principal.");
	getch();
	system("cls");
}

