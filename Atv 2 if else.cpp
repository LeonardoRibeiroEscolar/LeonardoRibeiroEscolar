#include <stdio.h>

int main(){
	
	int num;
	
	printf("Digite a nota do aluno:\n");
	scanf("%d",&num);
	
	
	if(num >= 60){
		printf("Nota: %d aluno aprovado", num);
	}else if(num > 40){
		printf("Nota: %d aluno em recuperação", num);
	}else{
		printf("Nota: %d aluno reprovado", num);
	}
	
	return 0;
}