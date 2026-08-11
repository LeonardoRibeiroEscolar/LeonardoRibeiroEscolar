#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	
	
	int contador = 0;
	int inserido;
	
	printf("Insira um número positivo(0 para finalizar):   ");
	scanf("%d", &inserido);
	
	while(inserido != 0){
		
	   contador += 1;
		   printf("Números inseridos: %d \n", contador);
		   printf("Insira um número positivo(0 para finalizar):   ");
		   scanf("%d", &inserido);
	
		
			
	}
	
		   printf("Números inseridos: %d", contador);


	
	
	return 0;
}