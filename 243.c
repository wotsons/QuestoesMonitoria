#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int somar (int num){
	num++;
	if(num == 5765){
		return num;
	}
	somar(num);
}
void main(){
	int numero = somar(1);
	printf("%d", numero);
	
}



/*
void chegagem(char caractere){
	
	if(isdigit(caractere)){
		printf("Eh um numero");
	}
	else if(islower(caractere)){
		printf("Eh minisculo");
	}
	else if(isupper(caractere)){
			printf("Eh maiusculo");
	}
	else{
		printf("Eh um caractere especial");
	}
	
}

void main (){
	
	char caractere;
	printf("Informe um caractere: ");
	scanf("%c", &caractere);
	chegagem(caractere);
	
}*/
