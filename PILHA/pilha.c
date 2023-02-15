#include <stdio.h>
#define MAX 10

typedef int tdado;

typedef struct{
	tdado pilha[MAX];
	int topo;
}tPilha;
//----------------------
void inicializa(tPilha *p){
	p->topo = -1;
}
//----------------------
int push(tPilha *p, tdado dado){
	if(p->topo == MAX-1) // cheio
		return 0;
	p->topo++;
	p->pilha[p->topo] = dado;	
	return 1;
}
//----------------------
tdado pop(tPilha *p){
	tdado removido = p->pilha[p->topo];
	p->topo--;
	return removido;
}
//---------------------
tdado  peek(tPilha p){
	return p.pilha[p.topo];
}
//---------------------
int isEmpty(tPilha p){
	if (p.topo ==-1)
	return 1; // vazia
	  else
	   return 0;
}
//---------------------
void mostraPilha(tPilha p){
	while(p.topo>-1){
		printf("%d | ",p.pilha[p.topo]);
		p.topo--;
	}
	printf("/n");
}

//------------------------


int menu(){
	int op;
	printf("*** Estrutura de Dados I - Pilha Estatica ****\n");
	printf("1-Push (Inserir)\n");
	printf("2-Pop (Remover)\n");
	printf("3-Peek (Olhar Topo)\n");
	printf("0-Sair\n");
	scanf("%d",&op);
	return op;
}
//------------------------
int main(){
	tPilha p1;
	inicializa(&p1);
	tdado dado;
	int op;
	
		do{
			mostraPilha(p1);
			op =menu();
			
			switch(op){
				case 1: printf("Dado para pilha: ");
							scanf("%d",&dado);
								if(push(&p1, dado)==1)
									printf(" Inserido com sucesso!");
									  else
									  	printf("Pilha Cheia - Stack Overflow");
				break;					  	
							
				case 2: printf("Remover dados da pilha: ");
							if(!isEmpty(p1)){
								dado=pop(&p1);
								printf("Dado removido:%d\n", dado);
							}
							else
								printf("Pilha vazia\n");
								
				break;
				}// fim switch
				getch();// pausa
				system("cls");//limpa tela
							
				case 3: if(!isEmpty(p1)){
								dado=peek(p1);
								printf("Dado no Topo:%d\n", dado);
							}
							else
								printf("Topo vazia\n");
							
				
				
							
				break;
				
				case 0: printf("Saindo...");
				break;
				        
			}
			    
		 
			while(op!=0);                
}

