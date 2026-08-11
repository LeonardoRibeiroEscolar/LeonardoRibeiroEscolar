#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	
	
	int valor = 0;
	int soma = 1;
	
	printf("===Inicio do sistema===");
	printf("Digite um número: (0 para encerrar)\n");

	

	scanf("%d", &valor);
	
	while(valor != 0){
		
	
		
		soma = valor + soma;
	    
        printf("%d\n", soma);
		
		printf("Digite um número: (0 para encerrar)\n");
		scanf("%d", &valor);

			
	}
	


	
	
	return 0;
}