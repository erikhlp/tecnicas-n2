#include <stdlib.h>
#include <stdio.h>

//- dados:
// - clientes
// - pizzas
// - pre�os
// - entregador
// - estoque
// - fornecedores

//- funcionalidades:
// - cadastro de pratos, clientes, pre�os
// - entrega
// - venda de produto (cliente paga, baixa do estoque)
// - ver estoque
// - estatisticas (mais vendidos, entregas no m�s) (parte 2???)
// - emitir txt com nota fiscal (parte 2???)

typedef struct cliente {
	char nome[30];
	char endereco[30];
	char telefone[30];
} cliente;

typedef struct pizza {
	char tamanho[30];
	char sabor[30];
} pizza;

typedef struct entregador {
	char nome[30];
	float precoPorEntrega; //Criar fun��o calcula salario do entregador que faz numeroDeEntregas*precoDaEntrega
	//Da pra fazer uma outra funcao "calculaPrecoEntrega" que ve a distancia que o motoboy precisa fazer e diz o pre�o da tele mas ai vai ser uma m�o
};

typedef struct estoque {
	//unidades
	int farinha; 
	int fermento;
	int acucar;
	int azeite;
	int tomate;
	int cebola;
	int pimentao;
	int azeitona;
	int queijoColonial;
	int queijoCheddar;
	int queijoParmesao;
	int queijoDeBuffalo;
	int bacon;
	int calabresa;
	int sal;
	int pimentaCalabresa;
	int pimentaPreta;
} estoque;

typedef struct fornecedor{
	char nomeEmpresa[30];
	char fornece[30];
	char diaDaEntrega[30]; //segunda, ter�a...
	float preco;
};

int main(){
//  Como declarar o valor da string pro array de char
//  cliente henrique;
//	strcpy(henrique.nome, "Henrique");
//	printf("Nome: %s", henrique.nome);



}










