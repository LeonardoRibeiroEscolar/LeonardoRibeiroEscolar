#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	
	
	int i = 0;
	int num = 0;
	
	printf("===Inicio do sistema===");
	printf("Digite um número: (0 para encerrar)\n");

	

	scanf("%d", &num);
	
	while(i < 10){
	    
        printf("%d\n", i + num , i++);
        
	
	}
	printf("sistema finalizado");


	
	
	return 0;
}