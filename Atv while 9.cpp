#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	
	
	int senha = 0;

	
	printf("===Inicio do sistema===");
	printf("Digite a senha:\n");
	scanf("%d", &senha);
	
	while(senha != 1234){
	
		
		printf("Senha incorreta - Digite novamente\n");
		scanf("%d", &senha);

			
	}
	
   printf("Senha correta - Acesso liberado");

	
	
	return 0;
}