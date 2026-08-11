#include <stdio.h>

int main(){
	
	int num;
	
	printf("Digite um numero:\n");
	scanf("%d",&num);
	
	
	if(num > 0){
	  printf("%d é positivo", num);
	}else if(num < 0){
		printf("%d é negativo", num);
	}else{
		printf("%d é igual a zero", num);
	}
	
	return 0;
}